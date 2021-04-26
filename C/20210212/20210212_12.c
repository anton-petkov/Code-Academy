/*Използвайки предишното упражнение, изведете участниците
подредени по азбучен ред*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
        name[i] = (char *)malloc(150);
        fflush(stdin);
        gets(name[i]);
        printf("Last Name:");
        family[i] = (char *)malloc(150);
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
            for (int k = 0; k <= i; k++)
            {
                for (int j = k + 1; j <= i; j++)
                {
                    if (strcmp(name[k], name[j]) > 0)
                    {
                        printf("smth");
                        char temp[100];
                        strcpy(temp, name[k]);
                        strcpy(name[k], name[j]);
                        strcpy(name[j], temp);
                        strcpy(temp, family[k]);
                        strcpy(family[k], family[j]);
                        strcpy(family[j], temp);
                        int itemp = id[k];
                        id[k] = id[j];
                        id[j] = itemp;
                        itemp = age[k];
                        age[k] = age[j];
                        age[j] = itemp;
                    }
                }
            }
            printf("Participants: \n");
            for (int j = 0; j <= i; j++)
            {
                printf("Id: %d , ", id[j]);
                printf("Name: %s , ", name[j]);
                printf("Family: %s , ", family[j]);
                printf("Age: %d\n", age[j]);
            }
            break;
        }
        i++;
    }
    return 0;
}
