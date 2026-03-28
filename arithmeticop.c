#include <stdio.h>

int main()
{
    int a=30, b=20;
    int sum = a + b;
    int min = a - b;
    int mlt = a * b;
/*
    If we divide an integer by another integer,
    the result will also be an integer value (fraction part is removed).

    So, to get a decimal result, we multiply one value by 1.0
    to convert it into float.

    The result must be stored in a float variable,
    and printf format specifier should be %f.
*/

    float dvd = a*1.0 / b; // % gives the remainder after division

    int mod = a % b;
    printf("%d", mod);


    return 0;
}