/* Напишете функциите като макроси:
1. функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
 Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0)); */
#include <stdio.h>
#include <math.h>

#define AVG(x, y) ((double)x + y) / 2

#define AVG_RANGE(a, b)                \
    {                                  \
        int size = ((b) - (a)) + 1;    \
        double res = 0;                \
        for (int i = 0; i < size; i++) \
        {                              \
            res = res + a + i;         \
        }                              \
        res /= size;                   \
        printf("%g\n", res);           \
    }

#define POW(x, e)       \
    {                   \
        double res = x; \
        int i = e;      \
        while (--i)     \
        {               \
            res *= x;   \
        }               \
        x = res;        \
    }

#define TO_UPPER(c) (c >= 'a' && c <= 'z') ? c + 'A' - 'a' : c
#define DISP(f, x)                         \
    {                                      \
        printf("f(% g) = % g\n", x, f(x)); \
    }
int main()
{
    printf("%g\n", AVG(121, 63));
    AVG_RANGE(7, 9);

    int iValue = 3;
    POW(iValue, 3);
    printf("%d\n", iValue);

    double powed = 3.14;
    POW(powed, 2);
    printf("%f\n", powed);
    printf("%c\n ", TO_UPPER('g'));
    DISP(sqrt, 9.0);
    return 0;
}