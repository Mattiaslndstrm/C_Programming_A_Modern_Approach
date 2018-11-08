#include <stdio.h>


// Prints the result of an expression. Evaluated from left to right.
int main(void)
{
    char ch1, ch2;
    float n1, n2, result;
    printf("Enter an expression: ");

    while (1)
    {
        scanf("%f%c", &n1, &ch1);
        if (!result)
            result = n1;
        if (ch2)
        {
            switch (ch2)
            {
                case '+':
                    result += n1;
                    break;
                case '-':
                    result -= n1;
                    break;
                case '*':
                    result *= n1;
                    break;
                case '/':
                    result /= n1;
                    break;
            }
        }
        if (ch1 == '\n')
            break;
        ch2 = ch1;
        n2 = n1;
    }
    printf("Value of expression: %g\n", result);
    return 0;
}
