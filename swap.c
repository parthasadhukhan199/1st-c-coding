#include <stdio.h>

int main()
{

    int a = 10;
    int b = 20;

    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("a=%d and b=%d", a, b);

    return 0;
}