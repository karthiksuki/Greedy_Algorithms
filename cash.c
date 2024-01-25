#include <cs50.h>
#include <stdio.h>

int owed_quarters(int cent);
int owed_dimes(int cent);
int owed_nickels(int cent);
int owed_pennies(int cent);

int main(void)
{
    // initialization
    int balance, sum;

    // Prompt the user for change owed, in cents
    do{
    balance = get_int("Change owed (in cents): \n");
    }while(balance < 0);

    // Calculate how many quarters you should give customer
    int quarters = owed_quarters(balance);
    // Subtract the value of those quarters from cents
    balance = balance - (quarters * 25);

    // Calculate how many dimes you should give customer
    int dimes = owed_dimes(balance);
    // Subtract the value of those dimes from remaining cents
    balance = balance - (dimes * 10);

    // Calculate how many nickels you should give customer
    int nickels = owed_nickels(balance);
    // Subtract the value of those nickels from remaining cents
    balance = balance - (nickels * 5);

    // Calculate how many pennies you should give customer
    int pennies = owed_pennies(balance);
    // Subtract the value of those pennies from remaining cents
    balance = balance - (pennies *1);

    // Sum the number of quarters, dimes, nickels, and pennies used
    // Print that sum
    sum = quarters + dimes + nickels + pennies;

    printf("Quarter (¢25): %d\n", quarters);
    printf("Dimes (¢10): %d\n", dimes);
    printf("Nickels (¢5): %d\n", nickels);
    printf("Pennies (¢1): %d\n", pennies);

    printf("Coins in total: %d\n", sum);


}


int owed_quarters(int balance)
{
    int quarters = 0;
    while(balance>=25)
    {
        quarters++;
        balance = balance - 25;
    }
    return quarters;
}


int owed_dimes(int balance){
    int dimes = 0;
    while(balance>=10){
        dimes++;
        balance = balance - 10;
    }
    return dimes;
}


int owed_nickels(int balance){
    int nickels = 0;
    while(balance>=5){
        nickels++;
        balance = balance - 5;
    }
    return nickels;
}

int owed_pennies(int balance){
    int pennies = 0;
    while(balance>=1){
        pennies++;
        balance = balance - 1;
    }
    return pennies;
}
