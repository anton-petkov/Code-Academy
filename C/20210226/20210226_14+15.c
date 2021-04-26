/*Напишете програма, в която се въвеждат пореден
номер, име, фамилия, възраст на участници в маратон.
Изискването е, за името и фамилията, да не се използват
масиви с фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците.
Задача 15 Използвайки предишното упражнение, изведете
участниците подредени по азбучен ред.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct marathon
{
    int *num;
    int *age;
    char *name;
    char *lastName;
} ttl;

int main(void)
{
    ttl runner[10];

    int participants;
    printf("total number of participants: ");
    scanf("%d", &participants);
    printf("\n------eneter participants' details below------\n");

    for (int i = 0; i < participants; i++)
    {

        runner[i].num = (int *)malloc(sizeof(runner[i].num));
        if (runner[i].num == NULL)
        {
            printf("No memory available!");
            exit(1);
        }
        printf("\nnumber: ");
        scanf("%d", &runner[i].num);

        runner[i].age = (int *)malloc(sizeof(runner[i].age));
        if (runner[i].age == NULL)
        {
            printf("No memory available!");
            exit(1);
        }
        printf("age: ");
        scanf("%d", &runner[i].age);

        runner[i].name = (char *)malloc(sizeof(runner[i].name));
        if (runner[i].name == NULL)
        {
            printf("No memory available!");
            exit(1);
        }
        printf("first name: ");
        scanf("%s", runner[i].name);

        runner[i].lastName = (char *)malloc(sizeof(runner[i].lastName));
        if (runner[i].lastName == NULL)
        {
            printf("No memory available!");
            exit(1);
        }
        printf("last name: ");
        scanf("%s", runner[i].lastName);
    }
    for (int i = 0; i < participants; i++)
        for (int j = i + 1; j < participants; j++)
            if (strcmp(runner[i].name, runner[j].name) > 0)
            {
                ttl temp = runner[i];
                runner[i] = runner[j];
                runner[j] = temp;
            }
    printf("\n------list of participants------\n");

    for (int i = 0; i < participants; i++)
    {

        printf("\nparticipant %d\n", runner[i].num);
        printf("age: %d\n", runner[i].age);
        printf("name: %s\n", runner[i].name);
        printf("last name: %s\n", runner[i].lastName);
    }

    return 0;
}
/*
void bubbleSort(ttl runner, int n){
    for(int i = 0; i<n-1; i++){
        int swapped  = 0; 
        for(int j = 0; j < n -1 -i; j++){
            if(runner[i].name,runner[j+1].name){
               char* target = runner[j+1];
                runner[j+1]=runner[j];
                runner[j] = target;
                swapped = 1; 
            }
        } 
    }
}
*/