// The "str_chr" function scans a string for the first occurrence of a given character.

#include <stdio.h>

char *str_chr(const char *str, int c)
{
    while (*str != '\0')
    {
        if (*str == c)
            return (char *)str; // explicite typecasting (const to non-const)
        str++;
    }
    return NULL;
}

int main(void)
{
    char c = 'o';
    char *ptr = NULL;
    char str[20] = "C Programming";

    ptr = str_chr(str, c);

    if (ptr != NULL)
        printf("Character located at index : %d\n", ptr - str);
    else
        puts("Character not found");

    return 0;
}