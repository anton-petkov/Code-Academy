#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static const char *FORMAT_PERSON_IN = "<Person>\n\t<Name> %s </Name>\n\t<Age> %d </Age>\n\t<Gender> %c </Gender>\n</Person>\n";
static const char *FORMAT_PERSON_OUT = "<Person>\n\t<Name> %s </Name>\n\t<Age> %d </Age>\n\t<Gender> %c </Gender>\n</Person>\n";
typedef struct Person
{
    char name[20];
    int age;
    char gender;
} t_person;
int main(void)
{
    t_person m = {
        .name = "Anton",
        .age = 23,
        .gender = 'M'};
    t_person dm;
    FILE *fp;
    fp = fopen(".\\20210308\\20210308_18\\people.xml", "w+");
    if (NULL == fp)
        return 1;
    fprintf(fp, FORMAT_PERSON_OUT, m.name, m.age, m.gender);
    fseek(fp, 0, SEEK_SET);

    fscanf(fp, FORMAT_PERSON_IN, dm.name, &dm.age, &dm.gender);
    printf(FORMAT_PERSON_OUT, dm.name, dm.age, dm.gender);
    fclose(fp);
    return 0;
}