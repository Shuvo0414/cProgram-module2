#include <stdio.h>

int main (){

/*
Logical operators also return Boolean values (true or false),
but they work differently from relational operators.

Relational operators compare two values directly (example: a > b).

Logical operators are used between two relational expressions
(or Boolean values) to produce a new Boolean result.

&&  --> Logical AND operator
AND means both conditions must be true.

true  && true  = true
true  && false = false
false && true  = false
false && false = false


||  --> Logical OR operator
OR means at least one condition must be true.

true  || true  = true
true  || false = true
false || true  = true
false || false = false
*/



int a = 10;
int b = 20;

if (a < 15 && b > 10)
{
    printf("Both conditions are true");
}
else{
    printf("Both conditions are flase");
}


    return 0;
}