#include <cs50.h>
#include <stdio.h>

int get_correct_int(string prompt);

int main(void)
{
    int h = get_correct_int("Height: ");

    for (int r = 1 ; r <= h; r++)
    {
        for(int k = 1; k <=h - r ; k++ )
        {
            printf(" ");
        }

        for (int c = 1; c <= r; c++)
        {
            printf("#");
        }
    printf("  ");
        for (int c = 1; c <= r; c++)
        {
            printf("#");
        }
    printf("\n");
    }


}

int get_correct_int(string prompt)
{
    int i;
    do
    {
        i = get_int("%s", prompt);
    }
    while (i < 1 || i > 8);
    return i;
}

