#include "stack.h"
int areParenthesesBalanced(char *expression) {
    int stackSize = strlen(expression);
    char stack[stackSize];
    int top = -1;

    for (int i = 0; expression[i] != '\0'; i++) {
        if (expression[i] == '(' || expression[i] == '[' || expression[i] == '{') {
            stack[++top] = expression[i];
        } else if (expression[i] == ')' || expression[i] == ']' || expression[i] == '}') {
            if (top == -1 ||
                (expression[i] == ')' && stack[top] != '(') ||
                (expression[i] == ']' && stack[top] != '[') ||
                (expression[i] == '}' && stack[top] != '{')) {
                return 0;
            }
            top--;
        }
    }

    return (top == -1);
}
int main() {
    char exp[] = "((a + b) * (c - d))";

    if (areParenthesesBalanced(exp))
        printf("Parentheses are balanced.\n");
    else
        printf("Parentheses are not balanced.\n");

    return 0;
}
