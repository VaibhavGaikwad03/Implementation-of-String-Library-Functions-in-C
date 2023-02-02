// The "str_cat" function concatenates one string with another. It appends a source string to the destination string.

#include <stdio.h>

char *str_cat(char *dest, const char *src)
{
    int iCnt1 = 0, iCnt2 = 0;

    while (dest[iCnt2] != '\0')
        iCnt2++;

    while (src[iCnt1] != '\0')
    {
        dest[iCnt2] = src[iCnt1];
        iCnt1++;
        iCnt2++;
    }
    dest[iCnt2] = '\0';

    return dest;
}

int main(void)
{
    char dest[20] = "Jay";
    char src[20] = "Ganesh";
    char *ptr = NULL;

    ptr = str_cat(dest, src);

    printf(ptr);

    return 0;
}