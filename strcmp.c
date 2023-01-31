// The "str_cmp" function compares two strings.

#include <stdio.h>

int str_cmp(const char *str1, const char *str2)
{
    while (*str1 != '\0' || *str2 != '\0')
    {
        if (*str1 != *str2)
        {
            if ((*str1 - *str2) > 0)
                return 1;
            else
                return -1;
        }
        str1++;
        str2++;
    }
    return 0;
}

int main(void)
{
    char str1[20] = "Hello";
    char str2[20] = "Hello";

    printf("%d", str_cmp(str1, str2));

    return 0;
}