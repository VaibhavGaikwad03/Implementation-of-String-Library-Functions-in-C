// The "str_cat" function concatenates one string with another. It appends a source string to the destination string.

#include <stdio.h>

char *str_cat(char *dest, const char *src)
{
    while (*dest != '\0')
        dest++;

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';

    return dest;
}

int main(void)
{
    char dest[20] = "Jay";
    char src[20] = "Ganesh";

    str_cat(dest, src);

    printf(dest);

    return 0;
}