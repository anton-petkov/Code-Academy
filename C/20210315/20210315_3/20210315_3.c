#include "tree.c"
#define SIZE 13
treeNode_t *ar = NULL, *z;
treeNode_t *br = NULL, *z;
treeNode_t *cr = NULL, *z;
treeNode_t *dr = NULL, *z;
treeNode_t *er = NULL, *z;
int main(void)
{
    int i;
    int a[SIZE] = {7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13};
    int b[SIZE] = {12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65};
    int c[SIZE] = {4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81};
    int d[SIZE] = {81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4};
    int e[SIZE] = {28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14};
    for (i = 0; i < SIZE; i++)
        insert(&ar, a[i]);
    preorder(ar);
    printf("\n");
    for (i = 0; i < SIZE; i++)
        insert(&br, b[i]);
    preorder(br);
    printf("\n");
    for (i = 0; i < SIZE; i++)
        insert(&cr, c[i]);
    preorder(cr);
    printf("\n");
    for (i = 0; i < SIZE; i++)
        insert(&dr, d[i]);
    preorder(dr);
    printf("\n");
    for (i = 0; i < SIZE; i++)
        insert(&er, e[i]);
    preorder(er);
/*Нареждането зависи много от от пърив подаден връх*/
    return 0;
}