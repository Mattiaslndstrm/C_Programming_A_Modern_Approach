#include <stdio.h>


// Returns the number the user provided with 5% tax added.
// Yes, I know this is not a safe way of using scanf.
int main(void)
{
    int amount;
    printf("Enter an amount: ");
    scanf("%d", &amount);
    printf("With tax added: %.2f\n", amount * 1.05);
    return 0;
}