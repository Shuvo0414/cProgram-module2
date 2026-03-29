#include <stdio.h>

int main()
{

    // Nested IF , Else.

    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("I want to go to Cox's Bazar\n");

        // nested condition
        if (tk >= 10000)
        {
            printf("I also want to visit Saint Martin from Cox's Bazar\n");
        }
        else
        {
            printf("I will return from Cox's Bazar. Not enough money to visit Saint Martin\n");
        }
    }
    else
    {
        printf("I am not going anywhere, I do not have enough money\n");
    }

    /*
        Nested if-else means an if statement inside another if statement.

        First condition:
        If tk >= 5000 → go to Cox's Bazar

        Second condition (inside first if):
        If tk >= 10000 → also visit Saint Martin
        Else → return from Cox's Bazar because not enough money

        Else:
        If tk < 5000 → not going anywhere
    */

    return 0;
}