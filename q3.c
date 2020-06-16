/**
 * NOC C Test
 *
 * Question 3
 *
 * Reading from file as a proxy for a serial port
 * Using strncmp() from string.h
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    char *match = "#Xsense";
    
    fp = fopen("data.txt", "r");

    while ((read = getline(&line, &len, fp)) != -1) {

        if (strncmp(line, match, 6) == 0)  {
            printf("%s", line);
        }
    }

    fclose(fp);
}
