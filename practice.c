#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    int b;
    int c;

    scanf("%d", &a);
    b = a * 2;
    c = b - 4;
    printf("Your age is %d. \n""The double of your age is %d.\n" "while 4 removed from your age will be %d.", a, b, c);

    return (0);
}