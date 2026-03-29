#include <stdio.h>

int main()
{
    // Conditional Operator-2
    int tk;
    scanf("%d", &tk);// take amount of money as input

    if (tk >= 100)
    {
        printf("I eat Burger"); // if money is 100 or more
    }
    else if (tk >= 50)
    {
        printf("I buy ice cream");// if money is 50 or more but less than 100
    }
    else
    {
        printf("I am not buying anything");// if money is less than 50
}    
/*
    if – else if – else is used when we have multiple conditions.
    
    Program checks conditions from top to bottom:
    
    1. if condition is true → that block executes
    2. else if previous condition is false → check next condition
    3. else executes when all above conditions are false
    
    Only one block will execute.
*/




    return 0;
}