#include <stdio.h>

int main()
{

    int a[] = {1, 2, 4, 3, 2, 5, 8, 7, 4, 3, 8, 4};

    int size = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < size; i++)
    {

        printf("\n %d", a[i]);
    }

    return 0;
}