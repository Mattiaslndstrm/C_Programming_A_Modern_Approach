#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define STACK_SIZE 100

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

char contents[STACK_SIZE];
int top = 0;

int main(void)
{
    char ch, cur;
    printf("Enter parentheses and/or braces: ");
    while ((ch = getchar()) != '\n')
    {
        if (ch == '(' || ch == '{' || ch == '[')
            push(ch);
        else if (ch == ')' || ch == '}' || ch == ']')
            cur = pop();
        if (ch == ')' && cur != '(')
            stack_underflow();
        else if (ch == ']' && cur != '[')
            stack_underflow();
        else if (ch == '}' && cur != '{')
            stack_underflow();
    }
    if (is_empty())
        printf("Parentheses/braces are nested properly\n");
    else
        stack_underflow();

}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

char pop(void)
{
    if(is_empty())
    {
        stack_underflow();
        return '\0';
    }
    else
        return contents[--top];
}

void stack_underflow(void)
{
    printf("Parentheses/braces are not nested properly\n");
    exit(EXIT_SUCCESS);
}

void stack_overflow(void)
{
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}
