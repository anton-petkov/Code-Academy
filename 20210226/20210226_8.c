/*Напишете програма, която да създаде стек (LIFO) по подобие на този
от лекция 18, който обаче да бъде реализиран с динамично с динамично
заделяне на памет съобразно желанието на потребителя с функциите
malloc(), и free(). Стека да има следните функции (следното API):
struct Stack{
int *contents;
int top;
};
Stack create(int size); void destroy(Stack s);
int pop(); void push()
int top()
int isFull(); int isEmpty(void)*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int MAXSIZE = 16;

typedef struct stack
{
    int *contents;
    int top;
} Stack;
Stack *create(int size)
{
    Stack *pt = (Stack *)malloc(sizeof(Stack));
    pt->top = -1;
    pt->contents = (int *)malloc(sizeof(int) * size);
    return pt;
}

void destroy(Stack *s)
{
    free(s);
}

int isFull(Stack *stack)
{
    return stack->top == MAXSIZE - 1;
}
int isEmpty(Stack *stack)
{
    return stack->top == -1;
}

void push(Stack *stack, int item)
{

    printf("%d\n", item);
    stack->contents[++stack->top] = item;
}
int peek(Stack *stack)
{
    return stack->contents[stack->top];
}
int pop(Stack *stack)
{
    return stack->contents[stack->top--];
}

int main()
{
    Stack *stack = create(MAXSIZE);
    push(stack, 3);
    push(stack, 5);
    push(stack, 9);
    push(stack, 1);
    push(stack, 12);
    push(stack, 15);
    printf("Element at top of the stack: %d\n", peek(stack));
    printf("Elements: \n");
    while (!isEmpty(stack))
    {
        int data = pop(stack);
        printf("%d\n", data);
    }
    printf("Stack full: %s\n", isFull(stack) ? "true" : "false");
    printf("Stack empty: %s\n", isEmpty(stack) ? "true" : "false");
    destroy(stack);
    return 0;
}
