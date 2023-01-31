// The "str_lwr" function converts all the letters in a string to lowercase.

#include <stdio.h>

char *str_lwr(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
            *str = *str + 32;
        str++;
    }
    return str;
}

int main(void)
{
    char str[20] = "Jay Ganesh";

    str_lwr(str);

    printf(str);

    return 0;
}