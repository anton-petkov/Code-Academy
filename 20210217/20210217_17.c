/*Имаме 2 сортирани масиви А и В с различна размерност k и l и
произволни int числа.
Образувайте масив С, образуван от смесването на А и В, така че С да
съдържа елементите на А и В, но да е подреден и да не се налага да го
сортираме отнов */
#include <stdio.h>
void newArray(int arr1[], int arr2[], int size_a, int size_b)
{
    int arrC[size_a + size_b];
    for (int i = 0, j = 0, k = 0; k < size_b + size_a;)
    {
        if (j == size_b)
        {
            arrC[k] = arr1[i];
            i++;
            k++;
            continue;
        }
        if (i == size_a)
        {
            arrC[k] = arr2[j];
            j++;
            k++;
            continue;
        }

        if (arr1[i] < arr2[j])
        {
            arrC[k] = arr1[i];
            i++;
            k++;
        }
        else if (arr1[i] > arr2[j])
        {
            arrC[k] = arr2[j];
            j++;
            k++;
        }
        else if (arr1[i] = arr2[j])
        {
            arrC[k] = arr1[i];
            i++;
            k++;
        }
    }
    for (int i = 0; i < size_b + size_a; i++)
    {
        printf("%d ", arrC[i]);
    }
}

int main()
{
    int arrA[88] = {1, 4, 7, 10, 13, 14, 19, 20, 21, 22, 23, 24, 26, 30, 31, 36, 41, 42, 45, 46, 47, 50, 53, 56, 59, 61, 62, 64, 66, 68, 69, 74, 76, 84, 85, 87, 89, 91, 94, 95, 96, 99, 101, 102, 103, 104, 105, 107, 108, 109, 110, 117, 118, 120, 121, 122, 123, 130, 132, 134, 135, 136, 141, 142, 144, 146, 148, 150, 151, 155, 159, 161, 166, 174, 175, 176, 177, 178, 179, 180, 182, 186, 187, 194, 195, 197, 198, 200};
    int arrB[70] = {2, 4, 7, 8, 9, 13, 17, 18, 19, 20, 21, 22, 24, 26, 30, 38, 39, 40, 42, 43, 44, 45, 47, 53, 56, 57, 60, 61, 62, 65, 66, 69, 71, 75, 76, 77, 78, 79, 80, 82, 83, 89, 91, 97, 98, 100, 101, 102, 103, 104, 107, 108, 110, 111, 114, 117, 119, 121, 123, 124, 126, 129, 130, 138, 141, 144, 147, 150, 151, 157};

    newArray(arrA, arrB, 88, 70);

    return 0;
}
