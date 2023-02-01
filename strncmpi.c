// The "str_n_cmpi" function compares a portion of two strings without case sensitivity.

#include <stdio.h>

int str_n_cmpi(const char *str1, const char *str2, int n)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < n;)
    {
        if ((str1[iCnt] == str2[iCnt]) || (str1[iCnt] == (str2[iCnt] - 32)) || (str1[iCnt] == (str2[iCnt] + 32)))
            iCnt++;
        else
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
    char str2[20] = "IrOnic";

    iRet = str_n_cmpi(str1, str2, 4);

    if (iRet != 0)
        puts("Strings are not equal");
    else
        puts("Strings are equal");

    return 0;
}