// The "str_n_set" function sets the first n characters in a string to a specific character.

#include <stdio.h>

char *str_n_set(char *str, int c, int n)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < n && str[iCnt] != '\0'; iCnt++)
        str[iCnt] = c;
    return str;
}

int main(void)
{
    char c = 'A';
    char str[20] = "Hello World";

    str_n_set(str, c, 4);

    puts(str);

    return 0;
}