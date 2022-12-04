#include <stdio.h>
#include <stdlib.h>

//this code is a practice on nested loops

int main(void)
{
    int a;
    scanf("%d", &a);

    if (a < 0)
    {
        printf("%d is not a number between 0 and 10\n", a);
    }
    else
    {
        if (a > 10)
        {
            printf("%d is a number not between 0 and 10\n", a);
        }
        else
            printf("%d is a number between 0 and 10\n", a);
    }
    return (0);
}