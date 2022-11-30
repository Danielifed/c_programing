#include <stdio.h>
#include <stdlib.h>

//alogrithim that return the sum, product and divison of two set of numbers

int main(void)
{
    int a, b;

    scanf("%d" "%d", &a, &b);
    int sum = a + b, product = a * b, division = b / a;
    printf("the sum of the numbers is %d.\n"
           "the product of the numbers is %d.\n"
           "the division of the numbers is %d.",
           sum, product, division);
    return (0);
}