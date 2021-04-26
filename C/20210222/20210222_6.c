/* Опишете времето: часове:минути:секунди като структура
tagTMyTime. Използвайки тази структура, дефинирайте следните функции:
добавяне на секунди, добавяне на минути. добавяне на часове към дадена
променлива от тип struct tagTMyTime. Напишете следните функции:
връщане на броя секунди за дадена променлива от въведения
тип и обратна функция от секундите да се генерира променлива
tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно.
*/
#include <stdio.h>
#include <stdlib.h>
struct myTime
{
    int hours;
    int minutes;
    int seconds;
};
void addSeconds(struct myTime *a, int n)
{
    if (n > 59)
    {
        a->seconds += n % 60;
        a->minutes += n / 60;
    }
    else if (n > 3599)
    {
        a->seconds += n % 3600;
        a->minutes += n % 60;
        a->hours += n / 24;
    }
    else
    {
        a->seconds += n;
    }
}
void addMinutes(struct myTime *a, int n)
{
    if (n > 59)
    {
        a->minutes += n % 60;
        a->hours += n / 60;
    }

    else
    {
        a->hours += n;
    }
}
void addHours(struct myTime *a, int n)
{
    if (n > 23)
    {

        a->hours += n % 24;
    }

    else
    {
        a->hours += n;
    }
}
int getSeconds(struct myTime a)
{
    int sec = (a.hours * 3600) + (a.minutes * 60) + a.seconds;
    return sec;
}
struct myTime getTime(int n)
{
    struct myTime a;
    a.hours = n / 3600;
    a.minutes = (n / 60) % 60;
    a.seconds = n % 60;

    return a;
}
struct myTime fixTime(struct myTime *a)
{

    if (a->seconds > 59)
    {
        a->minutes = a->minutes + (a->seconds / 60);
        a->seconds %= 60;
    }
    if (a->minutes > 59)
    {
        a->hours = a->hours + (a->minutes / 60);
        a->minutes %= a->minutes;
    }
    if (a->hours > 23)
    {

        a->hours = a->hours % 24;
    }

    return *a;
}
struct myTime TimeDifference(struct myTime a, struct myTime b)
{
    if (a.hours < b.hours)
    {
        return getTime(getSeconds(b) - getSeconds(a));
    }
    else
    {
        return getTime(getSeconds(a) - getSeconds(b));
    }

    return getTime(getSeconds(a) - getSeconds(b));
}
struct myTime TimeAdd(struct myTime a, struct myTime b)
{
    int sec = getSeconds(a) + getSeconds(b);
    return getTime(sec);
}
int main(int argc, char *argv[])
{
    struct myTime a = {8, 17, 23};
    struct myTime c = {5, 17, 16};
    struct myTime sub = TimeDifference(c, a);
    struct myTime add = TimeAdd(c, a);
    struct myTime d = {8, 17, 23};
    struct myTime *b = &d;
    addSeconds(b, 39);
    addMinutes(b, 121);
    addHours(b, 52);

    *b = fixTime(b);
    printf("h:%d m:%d s:%d\n", b->hours, b->minutes, b->seconds);
    printf("The diffrence between h:%d m:%d s:%d and h:%d m:%d s:%d is: ", a.hours, a.minutes, a.seconds, c.hours, c.minutes, c.seconds);
    printf("h:%d m:%d s:%d \n", sub.hours, sub.minutes, sub.seconds);
    printf("The addition of h:%d m:%d s:%d and h:%d m:%d s:%d is: ", a.hours, a.minutes, a.seconds, c.hours, c.minutes, c.seconds);
    printf("h:%d m:%d s:%d \n", add.hours, add.minutes, add.seconds);

    return 0;
}
