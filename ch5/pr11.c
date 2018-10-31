#include <stdio.h>
#include <string.h>


// Program that uses switch statements to convert a number into English.
// Unsafe use of scanf
int main(void)
{
    int n;
    char ten[80 + 1] = "", single[80 + 1] = "";
    printf("Enter a one- or two-digit number: ");
    scanf("%d", &n);
    if (n < 0 || n > 99)
    {
        printf("Illegal number!\n");
        return 0;
    }
    if (n / 10 == 1)
    {
        switch (n % 10)
        {
            case 9:
                strcpy(single, "nineteen");
                break;
            case 8:
                strcpy(single, "eighteen");
                break;
            case 7:
                strcpy(single, "seventeen");
                break;
            case 6:
                strcpy(single, "sixteen");
                break;
            case 5:
                strcpy(single, "fifteen");
                break;
            case 4:
                strcpy(single, "fourteen");
                break;
            case 3:
                strcpy(single, "thirteen");
                break;
            case 2:
                strcpy(single, "twelve");
                break;
            case 1:
                strcpy(single, "eleven");
                break;
            case 0:
                strcpy(single, "ten");
                break;
        }
        goto end;
    }
    switch (n / 10)
    {
        case 9:
            strcpy(ten, "ninety");
            break;
        case 8:
            strcpy(ten, "eighty");
            break;
        case 7:
            strcpy(ten, "seventy");
            break;
        case 6:
            strcpy(ten, "sixty");
            break;
        case 5:
            strcpy(ten, "fifty");
            break;
        case 4:
            strcpy(ten, "forty");
            break;
        case 3:
            strcpy(ten, "thirty");
            break;
        case 2:
            strcpy(ten, "twenty");
            break;
    }

    switch (n % 10)
    {
        case 9:
            strcat(single, "nine");
            break;
        case 8:
            strcat(single, "eight");
            break;
        case 7:
            strcat(single, "seven");
            break;
        case 6:
            strcat(single, "six");
            break;
        case 5:
            strcat(single, "five");
            break;
        case 4:
            strcat(single, "four");
            break;
        case 3:
            strcat(single, "three");
            break;
        case 2:
            strcat(single, "two");
            break;
        case 1:
            strcat(single, "one");
            break;
        case 0:
            break;
    }
    end:
        printf("You entered the number %s%s\n", strcmp(ten, "") != 0 ? strcat(ten, "-") : ten, single);
}
