#include "tree.c"
#define SIZE 11
treeNode_t *root = NULL, *z;
int main(void)
{
    int i;
    int arr[SIZE] = {6, 5, 3, 1, 10, 8, 13, 7, 11,14,12};
    for (i = 0; i < SIZE; i++)
        insert(&root, arr[i]);
    z = root;
    preorder(z);
    printf("\n");
    
    
    del(3);
    del(8);
    del(11);
    del(13);
    preorder(z);
    
    return 0;
}