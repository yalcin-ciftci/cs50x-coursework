#include <cs50.h>
#include <stdio.h>
#include <math.h>

float get_coin_float(string prompt);

int main(void)
{
    float change_owed = get_coin_float("change owed: ");

    int cents = round(change_owed * 100);
    int coins = 0;
    while (cents >= 25)
    {
        cents = cents - 25;
        coins++;
    }
    while (cents >=10)
    {
        cents = cents -10;
        coins++;
    }
    while(cents >= 5)
    {
        cents = cents -5;
        coins++;
    }
    while(cents >= 1)
    {
        cents = cents -1;
        coins++;
    }

    printf("%i\n", coins);
}

float get_coin_float(string prompt)
{
    float c;
    do
    {
        c = get_float("%s", prompt);
    }
    while (c < 0);
    return c;

}
