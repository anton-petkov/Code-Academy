/*Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи.
void sort ( int a[], int n){
int i, j, temp;
for ( i = 0; i < n - 1; ++i )
for ( j = i + 1; j < n; ++j )
if ( a[i] > a[j] ) {
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}

*/

#include <stdio.h>

void bubbleSort(int m[], int lim)
{
    int *s = m;
    int i, j;
    int a = *s, b = *(s + 1);
    for (i = 0; i < lim - 1; i++)
    {
        for (j = 0; j < lim - 1; j++)
        {

            if (a > b)
            {
                int temp = *s;
                *s = *(s + 1);
                *(s + 1) = temp;
                s++;
                a = *s;
                b = *(s + 1);
            }
            else
            {
                s++;
                a = *s;
                b = *(s + 1);
            }
        }
        s = &m[0];
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", *s);
        s++;
    }
}

int main(void)
{

    int s[] = {1, 85, 71, 255, 6, 7};
    bubbleSort(s, 6);

    return 0;
}