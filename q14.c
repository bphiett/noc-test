/**
 * NOC C Test
 *
 * Question 14
 *
 * Function pointer example
 */

#include <stdio.h>


int fun(void); 

int main(int argc, char *argv[])
{
    int (*p)(void) = fun;
    (*p)();
    return 0;
}
int fun(void)
{
    printf("NOC\n");
    return 0;
}
