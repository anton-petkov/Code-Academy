/*Напишете програма, която чете съобщение, след което го
принтира в обратен ред:
Enter a message: I am Miro.
Reversal is : .oriM ma I
Използвайте getchar() за да вземете символите от конзолата, запазете ги в
масив от чарове, прекратете четенето до достигане на \n. Използвайте
пойнтер, който да сочи към текущата позиция на масива. Чрез него
принтирайте масива в обратен ред.*/
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    char buffer[100];

    while (buffer[i - 1] != '\n')
    {
        buffer[i] = getchar();
        i++;
    }

    char *array = &buffer[strlen(buffer) - 1];

    i = 0;

    while (i < strlen(buffer))
    {
        array--;
        printf("%c", *array);
        i++;
    }

    return 0;
}
