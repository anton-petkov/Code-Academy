/*Напишете програма, в която се въвеждат пореден номер,
име, фамилия, възраст на участници в маратон. Изискването
е за името и фамилията да не се използват масиви с
фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците.*/
#include <stdio.h>
#include <stdlib.h>
#define length 20

int main(void)
{
    int id[length], age[length];
    char **name, **family, choice;
    int i = 0;
    name = (char **)malloc(sizeof(char *));
    family = (char **)malloc(sizeof(char *));
    while (1)
    {
        id[i] = i + 1;
        printf("ID:%d\n", id[i]);
        printf("Firt Name:");
        name[i] = (char *)malloc(16);
        fflush(stdin);
        gets(name[i]);
        printf("Last Name:");
        family[i] = (char *)malloc(16);
        fflush(stdin);
        gets(family[i]);
        printf("Age:");
        fflush(stdin);
        scanf("%d", &age[i]);
        printf("Add more participants?(y/n)");
        fflush(stdin);
        scanf("%c", &choice);
        if (choice == 'n')
        {
            printf("Participants: \n");
            for (int j = 0; j <= i; j++)
            {
                printf("Id: %d\n", id[j]);
                printf("Name: %s\n", name[j]);
                printf("Family: %s\n", family[j]);
                printf("Age: %d\n", age[j]);
            }
            break;
        }
        i++;
    }
    return 0;
}