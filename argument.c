#include <stdint.h>

void fun(char a[], int b)
{

    printf("hey %s ", a);
    printf("you  are %d years old", b);
}

int main()
{
    char name[] = "partha";

    int age = 20;

    fun(name, age);

    return 0;
}