#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random()
{
    return rand() % 6 + 1;
}

int main()
{
    srand(time(0)); // seed for random number
    printf("%d", random());

    return 0;
}

// this is a pseudo random numbers which is a set values or elements that are statistically random
// do not use this to any sort of cryptographic security
