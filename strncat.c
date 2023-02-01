// The "str_n_cat" function concatenates a portion of one string with another.
// It appends at the the most n characters of a source string to a destination string.

#include <stdio.h>

char *str_n_cat(char *dest, const char *src, int n)
{
    int iCnt = 0;

    while (*dest != '\0')
        dest++;

    for (iCnt = 0; iCnt < n; iCnt++, dest++)
        *dest = src[iCnt];

    *dest = '\0';

    return dest;
}

int main(void)
{
    char src[20] = "Marvellous";
    char dest[20] = "Hello ";

    str_n_cat(dest, src, 6);

    puts(dest);

    return 0;
}