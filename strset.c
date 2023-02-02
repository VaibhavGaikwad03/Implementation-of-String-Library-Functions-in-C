// The "str_set" function sets all characters in a string to a specific character.

#include <stdio.h>

char *str_set(char *str, int ch)
{
    int iCnt = 0;

    while (str[iCnt] != '\0')
    {
        str[iCnt++] = ch;
    }
    return str;
}

int main(void)
{
    char ch = 'v';
    char *ptr = NULL;
    char str[20] = "Hello World!";

    ptr = str_set(str, ch);

    printf(ptr);

    return 0;
}