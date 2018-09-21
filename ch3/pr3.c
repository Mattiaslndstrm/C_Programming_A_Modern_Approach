#include <stdio.h>


// Separates an ISBN into its constitutes
//Unsafe use of scanf.
int main(void)
{
    int prefix, identifier, publisher, item, check;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &identifier, &publisher, &item, &check);
    printf("\nGS1 prefix: %d\n", prefix);
    printf("Group identifer: %d\n", identifier);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", item);
    printf("Check digit: %d\n\n", check);
    return 0;
}