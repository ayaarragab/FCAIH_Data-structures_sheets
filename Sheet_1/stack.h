#ifndef STACK_H
#define STACK_H
#include <stdio.h>
#include <stdlib.h>
#define max_size 100
typedef char stack_entry;
typedef struct stack_S
{
    int top;
    stack_entry *arr;
}Stack;
stack_entry pop(Stack *sample);
void push(Stack *sample, stack_entry value);
int isFull(Stack *sample);
int isEmpty(Stack *sample);
Stack *create(void);
stack_entry pop(Stack *sample);
int stack_size(Stack *sample);
#endif
