#include <stdio.h>
#include <stdlib.h>

//This program finds the sum of a given number, nth times

int main(void)
{
    int n, i, sum, j;
    printf("input the number to be added: ");
    scanf("%d", &n);

    sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("the sum is %d\n", sum);

    j = sum / sum;
    if (j == 0)
    {
        printf("the sum is an even number");
    }
    else
    {
        printf("the sum is an odd number");
    }

    return (0);
}