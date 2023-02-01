// The "str_n_cpy" function copies at the most n characters of a source string to destination string.

#include <stdio.h>

char *str_n_cpy(char *dest, const char *src, int n)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < n; iCnt++)
    {
        dest[iCnt] = src[iCnt];
    }

    dest[iCnt] = '\0';

    return dest;
}

int main(void)
{
    char src[20] = "Marvellous";
    char dest[20];

    str_n_cpy(dest, src, 6);

    printf(dest);

    return 0;
}