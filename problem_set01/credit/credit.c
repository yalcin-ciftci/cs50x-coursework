#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long card = get_long("card number: ");
    long copy_card = card;
    int n;
    int counter = 0;

    int sum = 0;


    while (copy_card > 0)
    {
        n = copy_card % 10;
        if (counter % 2 == 0)
        {
            sum = n + sum;
        }
        else
        {
            int carp = n * 2;
            int tens = carp / 10;
            int ones = carp % 10;
            sum = sum + tens + ones;
        }
        copy_card = copy_card/10;
        counter++;
    }

    long new_card = card;
    while (new_card > 99)
    {
        new_card = new_card / 10;
    }

    int ten = new_card /10;

    if (sum % 10 == 0)
    {
        if(ten == 4 && (counter == 13 || counter == 16))
            {
                printf("VISA\n");

            }

    else if(counter == 15 && (new_card == 34 || new_card == 37))

    {
        printf("AMEX\n");
    }

    else if(counter == 16 && new_card >= 51 && new_card <= 55)

    {
        printf("MASTERCARD\n");

    }

    else
    {
        printf("INVALID\n");

    }
    }
    else
    {
        printf("INVALID\n");

    }
}
