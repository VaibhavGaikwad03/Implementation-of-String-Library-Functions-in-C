// The "str_upr" function converts all the letters in a string to uppercase.

#include <stdio.h>

char *str_upr(char *str)
{
    int iCnt = 0;

    while (str[iCnt] != '\0')
    {
        if (str[iCnt] >= 'a' && str[iCnt] <= 'z')
            str[iCnt] -= 32;
        iCnt++;
    }
    return str;
}

int main(void)
{
    char *ptr = NULL;
    char str[20] = "Jay Ganesh";

    ptr = str_upr(str);

    puts(ptr);

    return 0;
}