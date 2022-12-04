#include <stdio.h>
#include <stdlib.h>

//this code is a practice on odd and even numbers

int main(void)
{
    int a;
    printf("input the value:", a);
    scanf("%d", &a);

    int c = a % 2;
    if (c == 0)
    {
        printf("%d is even\n", a);
    }
    else
    {
        printf("%d is odd\n", a);
    }
}