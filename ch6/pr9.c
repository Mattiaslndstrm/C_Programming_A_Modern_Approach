#include <stdio.h>

float apply_interest(float current_remaining, float interest_rate);

// Calculates the monthly remainders on a loan after the user have entered
// amonunt, interest, monthly payment and number of payments.
// Unsafe use of scanf.
int main(void)
{
    float loan_amount, interest_rate, monthly_payment;
    int number_payments;
    printf("Enter the amount of the loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("Enter number of payments: ");
    scanf("%d", &number_payments);

    for (int i = 1; i < number_payments + 1; i++)
    {
        loan_amount = apply_interest(loan_amount, interest_rate)
                      - monthly_payment;
        printf("Amount left to pay after %d payment(s): %.2f\n", i, loan_amount);
    }
    return 0;
}

float apply_interest(float current_remaining, float interest_rate)
{
    return current_remaining + current_remaining * ((interest_rate / 100) / 12);
}
