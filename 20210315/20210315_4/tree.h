#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef struct treeNode_t treeNode_t;
typedef struct treeNode_t
{
    int data;
    treeNode_t *left;
    treeNode_t *right; 
} treeNode_t;
extern treeNode_t *root;
void insert(treeNode_t**node, int d);
void preorder(treeNode_t *n);
int add(int n, treeNode_t *t);
int del(int n);
treeNode_t *search(int d);
void printCurr(treeNode_t *curr);
void printRight(treeNode_t *t);
treeNode_t *createNode(int key);