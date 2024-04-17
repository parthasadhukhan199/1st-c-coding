#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int min = 1;
    const int max = 100;

    srand(time(0));

    int a = rand() % max + min;
    int b = 1;
    int guess;
    do
    {
        printf("take a guess between 1 to 100");
        scanf("%d", &guess);

        if (guess > a)
        {
            printf("Too high");
        }
        else if (guess < a)
        {
            printf("Too low");
        }
        else
        {
            printf("Correct");
        }

        b++;

    } while (guess != a);

    printf("********");
    printf(" answer is %d\n you take %d guesses", a, b);
    printf("********");

    return 0;
}