// The "str_cmpi" function compares two strings without case sensitivity.
// The suffix character 'i'  in "str_cmpi" stands for ignore case.

#include <stdio.h>

int str_cmpi(const char *str1, const char *str2)
{
    while (*str1 != '\0' || *str2 != '\0')
    {
        if ((*str1 == *str2) || (*str1 == *str2 - 32) || (*str1 == *str2 + 32))
        {
            str1++;
            str2++;
        }
        else
        {
            if ((*str1 - *str2) > 0)
                return 1;
            else
                return -1;
        }
    }
    return 0;
}

int main(void)
{
    char str1[20] = "HelLo";
    char str2[20] = "hELlo";

    printf("%d", str_cmpi(str1, str2));

    return 0;
}