// The "str_rchr" function locates the last occurrence of a character in given string.

#include <stdio.h>

char *str_rchr(const char *str, int c)
{
    int iCnt = 0;

    while (str[iCnt] != '\0')
        iCnt++;
    iCnt--;

    while (iCnt != 0)
    {
        if (str[iCnt] == c)
            return (char *)str + iCnt;
        iCnt--;
    }
    return NULL;
}

int main(void)
{
    char c = 'l';
    char *ptr = NULL;
    char str[20] = "Hello";

    ptr = str_rchr(str, c);

    if (ptr != NULL)
        printf("Character located at index : %d\n", ptr - str);
    else
        puts("Character not found");

    return 0;
}