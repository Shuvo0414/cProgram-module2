#include <stdio.h>

int main()
{

    // Conditional Operator-1


/*
    if-else is a conditional statement.

    If the condition is true, the code inside the "if" block executes.
    If the condition is false, the code inside the "else" block executes.

    Here, we check if the money (tk) is greater than or equal to 100.
    If true → buy burger
    If false → not enough money
*/

    int tk;
    scanf("%d", &tk);// take amount of money as input

    if (tk >= 100)
    {
        printf("I eat burger");
    }
    else
    {
        printf("I have no money :(");
    }
    



    return 0;
}