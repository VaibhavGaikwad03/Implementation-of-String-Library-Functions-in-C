// The "str_upr" function converts all the letters in a string to uppercase.

#include <stdio.h>

char *str_upr(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
            *str = *str - 32;
        str++;
    }
    return str;
}

int main(void)
{
    char str[20] = "Jay Ganesh";

    str_upr(str);

    printf(str);

    return 0;
}