/**
 * NOC C Test
 *
 * Question 15
 *
 * Integer promotion rules in C99
 */

#include <stdint.h>
#include <stdio.h>
#include <limits.h>

void f(int8_t i);

int main(int argc, char **argv)
{
    int8_t i;

    for (i=SCHAR_MIN; i<SCHAR_MAX; i++) {
        f(i);
    }
    return 0;
}

void f(int8_t i)
{
    printf("in f(): uint8_t i = %d (unsigned int)i = %u\n", i, i);
   
    /* boolean < operator causes integer promotion of i (uint8_t) to an unsigned
     * int
     *
     * for the range of uint8_t values (-128 to 127) this conversion always
     * results in a value greater than 0U - therefore the if statement always
     * evaluates to false and Hello is never printed */
    if (i < 0U) {
        printf("Hello\n");
    } 
}
