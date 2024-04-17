#include <stdio.h>
#include <string.h>

struct player
{
    char name[10];
    int score;
};

int main()
{
    struct player a;
    struct player b;

    strcpy(a.name, "partha");
    strcpy(b.name, "sus");

    a.score = 4;
    b.score = 8;

    printf("%s has a score of %d\n", a.name, a.score);
    printf("%s has a score of %d", b.name, b.score);

    return 0;
}