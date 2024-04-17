#include <stdio.h>

int main()
{

    int numbers[2][3] = {
        {2, 4, 3},
        {4, 6, 8}};

    int row = sizeof(numbers) / sizeof(numbers[0]);
    int clm = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    // print

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < clm; j++)
        {
            printf(" %d", numbers[i][j]);
        }
        printf("\n");
    }


    
    return 0;
}
