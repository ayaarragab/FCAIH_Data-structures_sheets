#include "stack.h"
Stack *create(void)
{
    Stack *sample = malloc(sizeof(sample));
    if (sample == NULL)
        printf("Could not create stack\n");
    sample->arr = malloc(sizeof(sample->arr) * max_size);
    if (sample->arr == NULL)
        printf("Could not create stack's array\n");
    sample->top = -1; /*Initially, nothing is in the stack*/
    return (sample);
}

int isEmpty(Stack *sample)
{
    if (sample->top == -1)
        return (1);
    return (0);
}

int isFull(Stack *sample)
{
    if (sample->top == max_size - 1)
        return (1);
    return (0);
}

void push(Stack *sample, stack_entry value)
{
    if (!isFull(sample))
        sample->arr[++sample->top] = value;
}

stack_entry pop(Stack *sample)
{
    stack_entry item;

    if (!isEmpty(sample))
    {
        item = sample->arr[sample->top--];
        return (item);
    }
    return (-1);
}

int stack_size(Stack *sample)
{
    return (sample->top);
}
