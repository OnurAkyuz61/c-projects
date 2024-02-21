#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main() {
    int amount, twenties, tens, fives, ones;

    // Prompt the user to enter the dollar amount
    printf("Enter the dollar amount: ");
    scanf("%d", &amount);

    // Call the function to calculate the smallest number of bills
    pay_amount(amount, &twenties, &tens, &fives, &ones);

    // Display the result
    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
    // Calculate the number of each type of bill
    *twenties = dollars / 20;
    dollars = dollars % 20;

    *tens = dollars / 10;
    dollars = dollars % 10;

    *fives = dollars / 5;
    dollars = dollars % 5;

    *ones = dollars;
}