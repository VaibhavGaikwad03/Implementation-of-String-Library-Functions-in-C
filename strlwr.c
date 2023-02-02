// The "str_lwr" function converts all the letters in a string to lowercase.

#include <stdio.h>

char *str_lwr(char *str)
{
    int iCnt = 0;

    while (str[iCnt] != '\0')
    {
        if (str[iCnt] >= 'A' && str[iCnt] <= 'Z')
            str[iCnt] = str[iCnt] + 32;
        iCnt++;
    }
    return str;
}

int main(void)
{
    char str[20] = "Jay Ganesh";
    char *ptr = NULL;

    ptr = str_lwr(str);

    printf(ptr);

    return 0;
}