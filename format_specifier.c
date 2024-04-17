#include <stdio.h>

// format specifier

// %c = charecter
// %s = string
// %f = float
// %lf = double
// %d = integer

// %.1 = decimal precision
// %1 = minimum field width
// %- = left align

int main()
{

    float a = 5;

    printf("%f\n", a);
    printf("%.2f\n", a);
    printf("%8.2f\n", a);
    printf("%-f\n", a);

    return 0;
}