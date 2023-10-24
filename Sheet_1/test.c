 #include "stack.h"
 #include "stack.c"
 /*User level print stack function*/
 void print(Stack *s)
 {
     int i = 0;
     if (isEmpty(s))
     {
         printf("Stack is Empty\n");
         return;
     }
     while (i <= s->top)
         printf("%c\n", pop(s));
 }
 /*User level copy stack to other*/
void cpyTostack(Stack *dest, Stack *src)
{
    int i;

    for (i = 0; i < src->top; i++)
        dest->arr[i] = src->arr[i];
}
/*User level destroy stack*/
void destroy(Stack *sample)
{
    free(sample->arr);
    free(sample);
}
/*User level function returns first entered element*/
stack_entry firstElement(Stack *sample)
{
    if (!isEmpty(sample))
        return (sample->arr[0]);
    return (-1);
}
/*User level function returns copy of last entered element*/
stack_entry *cpy(Stack *sample)
{
    stack_entry copy;
    if (!isEmpty(sample))
    {
        copy = sample->arr[sample->top - 1];
        return (copy);
    }
    return (-1);
}
 int main(void)
 {
     Stack *stack = create();
     stack_entry value;
     int choice;
     do
     {
        printf("Please choose one of the following actions");
        printf("\t\nEnter (1) if you want to Read an element then Push it.");
        printf("\t\nEnter (2) if you want to Pop an element then display it. ");
        printf("\t\nEnter (3) if you want to know the current size of the stack. ");
        printf("\t\nEnter (4) if you want to display elements of the stack. ");
        printf("\t\nEnter (5) to exit.\n");
        scanf("%d", &choice);
         if (choice == 1)
         {
             printf("Enter the value: ");
             scanf(" %c", &value);
             push(stack, value);
         }
         else if (choice == 2)
             printf("Popped item is %c\n", pop(stack));
         else if (choice == 3)
             printf("Current size of the stack is %d\n", stack_size(stack) + 1);
         else if (choice == 4)
             print(stack);
         else if (choice == 5)
         {
             free(stack->arr);
             free(stack);
             exit(0);
         }
     }
     while (choice != 5);
     free(stack->arr);
     free(stack);
     return (0);
 }
