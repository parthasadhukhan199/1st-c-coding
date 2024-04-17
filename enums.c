// --enums--
// enums is a user defined type of named integer identifiers
// helps to make programe more readable
// enums are treated as integers

#include <stdio.h>

enum day
{
    sunday = 1,
    monday = 2,
    tuesday = 3,
    wednesday = 4,
    thrusday = 5,
    friday = 6,
    saterday = 7
};

int main()
{
    enum day today = monday;

    if (today == sunday || today == saterday)
        printf("\n this is weekend. have a blast");
    else
        printf("this is a working day .. go to work");

    return 0;
}