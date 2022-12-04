#include <stdio.h>
#include <stdlib.h>

//this code is a practice on while loops on abitary number of times

int main(void)
{
    int a;
    scanf("%d", &a);
    while (a > 0)
    {
        printf("I am within the range\n");
        a--;
    }
   if (a < 0)
    {
        printf("I am not within the range");
    }
    return (0);
}