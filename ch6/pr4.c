#include <stdio.h>


// Calculate the price of commission for a fictional broker and their rival.
// Unsafe use of scanf
int main(void)
{
    float commission, value, number, shareprice, rival;

    for (;;)
    {
        printf("Enter number of shares (0 to quit): ");
        scanf("%f", &number);
        if (number == 0)
            break;
        printf("Enter price per share: ");
        scanf("%f", &shareprice);
        value = number * shareprice;
        if (value < 2500.00f)
            commission = 30.00f + .017f * value;
        else if (value < 6250.00f)
            commission = 56.00f + .0066f * value;
        else if (value < 20000.00f)
            commission = 76.00f + .0034f * value;
        else if (value < 50000.00f)
            commission = 100.00f + .0022f * value;
        else if (value < 500000.00f)
            commission = 155.00f + .0009f * value;
        else
            commission = 255.00f + .0009f * value;

        if (commission < 39.00f)
            commission = 39.00f;

        if (number < 2000)
            rival = 33.00f + 0.03f * number;
        else
            rival = 33.00f + 0.02f * number;

        printf("Commision: $%.2f\n", commission);
        printf("Rival's commision: $%.2f\n", rival);
    }
    return 0;
}
