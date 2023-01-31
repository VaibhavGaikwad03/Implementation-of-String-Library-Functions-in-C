#include <stdio.h>

char *str_cpy(char *dest, const char *src)
{
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
    char src[20] = "Jay Ganesh";
    char dest[20];

    str_cpy(dest, src);

    printf(dest);

    return 0;
}