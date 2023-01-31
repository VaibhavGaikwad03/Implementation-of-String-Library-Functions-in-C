// The "str_set" function sets all characters in a string to a specific character.

#include <stdio.h>

char *str_set(char *str, int ch)
{
    while (*str != '\0')
    {
        *str = ch;
        str++;
    }
    return str;
}

int main(void)
{
    char str[20] = "Hello World!";
    char ch = 'v';

    str_set(str, ch);

    printf(str);

    return 0;
}