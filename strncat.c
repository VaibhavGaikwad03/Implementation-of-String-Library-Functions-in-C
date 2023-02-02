// The "str_n_cat" function concatenates a portion of one string with another.
// It appends at the the most n characters of a source string to a destination string.

#include <stdio.h>

char *str_n_cat(char *dest, const char *src, int n)
{
    int iCnt1 = 0, iCnt2 = 0;

    while (dest[iCnt2] != '\0')
        iCnt2++;

    for (iCnt1 = 0; iCnt1 < n; iCnt1++, iCnt2++)
        dest[iCnt2] = src[iCnt1];

    dest[iCnt2] = '\0';

    return dest;
}

int main(void)
{
    char src[20] = "Marvellous";
    char dest[20] = "Hello ";
    char *ptr = NULL;

    ptr = str_n_cat(dest, src, 6);

    puts(ptr);

    return 0;
}