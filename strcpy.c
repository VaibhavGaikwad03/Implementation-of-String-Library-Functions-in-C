// The "str_cpy" function copies the source string to the destination string.

#include <stdio.h>

char *str_cpy(char *dest, const char *src)
{
    int iCnt = 0;

    while (src[iCnt] != '\0')
    {
        dest[iCnt] = src[iCnt];
        iCnt++;
    }
    dest[iCnt] = '\0';

    return dest;
}

int main(void)
{
    char src[20] = "Jay Ganesh";
    char dest[20];
    char *ptr = NULL;

    ptr = str_cpy(dest, src);

    printf(ptr);

    return 0;
}