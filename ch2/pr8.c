#include <stdio.h>

float apply_interest(float current_remaining, float interest_rate);

// Calculates the first three monthly remainders on a loan after the user have entered
// amonunt, interest and monthly payment.
// Unsafe use of scanf.
int main(void)
{
    float loan_amount, interest_rate, monthly_payment;
    printf("Enter the amount of the loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    float remaining_first_month = apply_interest(loan_amount, interest_rate)
                                  - monthly_payment;
    float remaining_second_month = apply_interest(remaining_first_month, interest_rate)
                                   - monthly_payment;
    float remaining_third_month = apply_interest(remaining_second_month, interest_rate)
                                  - monthly_payment;

    printf("Balance remaining after first payment: %.2f\n", remaining_first_month);
    printf("Balance remaining after second payment: %.2f\n", remaining_second_month);
    printf("Balance remaining after third payment: %.2f\n", remaining_third_month);
    return 0;
}

float apply_interest(float current_remaining, float interest_rate)
{
    return current_remaining + current_remaining * ((interest_rate / 100) / 12);
}