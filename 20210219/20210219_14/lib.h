struct employee
{
    int num;
    char name[30];
    char surname[30];
    char family[30];
    char position[30];
    int salary;
    int years;
    struct employee *boss;
};
void fill(struct employee *dataBase, int cMax);
void getBoss(struct employee *dataBase, struct employee base, int cMax);
void print(struct employee *dataBase, int cMax);