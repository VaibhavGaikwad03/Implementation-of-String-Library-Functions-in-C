// The "str_n_cmp" function compares a portion of two strings.

#include <stdio.h>

int str_n_cmp(const char *str1, const char *str2, int n)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < n; iCnt++)
    {
        if (str1[iCnt] != str2[iCnt])
        {
            if (str1[iCnt] - str2[iCnt] > 0)
                return 1;
            else
                return -1;
        }
    }
    return 0;
}

int main(void)
{
    int iRet = 0;
    char str1[20] = "Iron";
    char str2[20] = "Ironic";

    iRet = str_n_cmp(str1, str2, 4);

    if (iRet != 0)
        puts("Strings are not equal");

    else
        puts("Strings are equal");

    return 0;
}