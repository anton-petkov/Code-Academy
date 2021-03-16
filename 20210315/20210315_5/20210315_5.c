#include "tree.c"
#define SIZE 9
treeNode_t *root = NULL, *z;
int main(void)
{
    int i;
    int arr[SIZE] = {22, 16, 32, 10, 31, 79, 82, 18, 14};
    for (i = 0; i < SIZE; i++)
        insert(&root, arr[i]);
    z = root;
    printf("\n%d\n", z->data);
    preorder(z);
    treeNode_t *tmp = search_iter(z, 79);
    printf("\nsearch_iter = %d\n", tmp->data);
    tmp = search_rec(z, 16);
    printf("\nsearch_rec = %d\n", tmp->data);
   
    return 0;
}