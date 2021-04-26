/*Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i:
int sum_array(const int a[], int n){
int i, sum = 0;
for(i = 0; i < n; i++){
sum += a[ i ];
return sum;
}*/
#include <stdio.h>
int fsum(int *a, int lim)
{
    int sum = 0;
    while (lim != 0)
    {
        sum += *a;
        a++;
        lim--;
    }
    return sum;
}
int main()
{
    int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};

    printf("%d", fsum(arr, 10));

    return 0;
}
