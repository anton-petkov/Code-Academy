#include "tree.h"
#include <Windows.h>
int del(int n){
    treeNode_t *current = search(n);
    treeNode_t *parent = current;
    if(current->right == NULL && current->left != NULL){
        printf("del =%d\n", current->left->data);
        current = current->left;
        Sleep(100000);
        free(current);
        parent->left = NULL;
    }else if(current->right != NULL  && current->left == NULL){
        printf("del =%d\n", current->right->data);
        current = current->right;
        free(current);
        parent->right = NULL;
    }
}
void insert(treeNode_t ** node, int key)
{
    if (*node == NULL)
      *node = createNode(key);
    else if ((*node)->data > key)
      insert(&(*node)->left, key);
    else
      insert(&(*node)->right, key);
}
treeNode_t *search(int d){
    treeNode_t *current;
    printf("Visiting elements: ");
    while (current->data != d){
        if(current != NULL)
            printf("%d ", current->data);
        if(current->data > d)
            current = current->left;
        else
            current = current->right;
        if(current == NULL)
            return NULL;
    }
    return current;
}
void preorder(treeNode_t *n){
    if(n){
        printf("%d ", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}
int add(int n, treeNode_t *t){
    if(NULL == t){
        t = (treeNode_t*)malloc(sizeof(treeNode_t));
        t->data = n;
        t->left = t->right = NULL;
    }else if(t->data > n){
            add(n,t->right);
        }else if(t->data < n){
            add(n, t->left);
        }else
            fprintf(stderr, "Елементът е вече в дървото!\n");
}
treeNode_t *search_iter(treeNode_t *t, int n){
    while ((t != NULL)&&(t->data != n)){
        if(t->data < n)
            t = t->right;
        else
            t = t->left;
    }
    return t;
}
treeNode_t *search_rec(treeNode_t *t, int n){
    if(t != NULL)
        if(t->data < n)
            t = search_rec(t->right, n);
        else if(t->data > n)
            t = search_rec(t->left, n);
    return t;
}
void printCurr(treeNode_t *curr){
    treeNode_t *p = curr;
    printf("curr - %d", p->data);
}
void printRight(treeNode_t *t){
    treeNode_t *p = t;
    while(p != NULL){
        printf("%d\t", p->data);
        p = p->right;
    }
}
treeNode_t *createNode(int key)
{
    treeNode_t *newNode = (treeNode_t *)malloc(sizeof(treeNode_t));
    newNode->data = key;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}