#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int change;
    printf("Please input amount of change in pennies:\n");
    scanf("%d", &change);

    int dollars = change / 100;
    printf("\nYour change is:\n");
    printf("\nDollars: %d.\n", dollars);

    change = change % 100;

    int quarters;
    if (change > 0)
    {
        quarters = change / 25;
        printf("\nQuarters: %d.\n", quarters);
    }
    change = change % 25;

    int dimes;
    if (change > 0)
    {
        dimes = change / 10;
        printf("\nDimes: %d.\n", dimes);
    }
    change = change % 10;

    int nickels;
    if (change > 0)
    {
        nickels = change / 5;
        printf("\nNickels: %d.\n", nickels);
    }
    change = change % 5;

    int pennies;
    if (change > 0)
    {
        pennies = change / 1;
        printf("\nPennies: %d.\n", pennies);
    }
    return 0;
}

