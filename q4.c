/**
 * NOC C Test
 *
 * Question 4
 *
 * Using string.h library
 */

#include <stdio.h>

int main(int argc, char **argv)
{
    float temp;

    /* example input line */
    char *line = "#Xsense 03/05/18 13:05:01.542 25.4 -101.2 3.5 15.35 76.4";
    
    sscanf(line, "%*s %*s %*s %*f %*f %*f %f", &temp);

    printf("temp = %.2f\n", temp);

    return 0;
}
