#include "stdio.h"
int main()
{
    char a = 250;
    int expr;
    expr = a + !a + ~a + ++a;
    printf("%d", expr);
    return 0;
}

/*
char a = 250;
250 is beyond the range of signed char. Its corresponding cyclic value is: -6
So, a = -6
Consider on the expression:
expr= a+ !a + ~a + ++a;
Operator! , ~ and ++ have equal precedence. And it associative is right to left.
So, First ++ operator will perform the operation. So value a will -5
Now,
Expr = -5 + !-5 + ~-5 + -5
= -5 + !-5 + 4 - 5
= -5 + 0 + 4 -5
= -6
*/
