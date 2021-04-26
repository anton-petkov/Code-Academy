/*Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи.
*/
#include <stdio.h>
int search(int arr[], int n, int x)
{
    int i = 0;
    while (i < n)
    {
        printf("%d ", *arr);
        if (*arr == x)
        {
            return i;
        }
        i++;
        arr++;
    }
    return 0;
}
int main()
{
    int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};

    printf("%d", search(arr, 10, 4));

    return 0;
}
