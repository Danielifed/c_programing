#include <stdio.h>
#include <stdlib.h>

//This program contains practice on if and else statements (conditional statements)

int main(void)
{
    int a;

    scanf("%d", &a);

    if (a < 0)
    {
        printf("%d is a negative number", a);
    }
    else if (a == 0)
    {
        printf("%d is zero", a);
    }
    else
    {
        printf("%d is a positive number", a);
    }
    return (0);
}