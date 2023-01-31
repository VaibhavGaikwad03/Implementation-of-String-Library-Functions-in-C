// The "str_str" function finds the first occurrence of a string in another string.

#include <stdio.h>

char *str_str(const char *str1, const char *str2)
{
    int iCnt1 = 0, iCnt2 = 0, iCnt3 = 0;

    while (str1[iCnt1] != '\0')
    {
        iCnt3 = iCnt1;

        while (str2[iCnt2] != '\0')
        {
            if (str1[iCnt3] != str2[iCnt2])
                break;
            iCnt3++;
            iCnt2++;
        }

        if (str2[iCnt2] == '\0')
            return (char *)str1 + iCnt1;
        else
        {
            iCnt1++;
            iCnt2 = 0;
        }
    }
    return NULL;
}

int main(void)
{
    char str1[20] = "Hello Readers";
    char str2[20] = "Read";
    char *ptr = NULL;

    ptr = str_str(str1, str2);

    if (ptr != NULL)
    {
        printf("Found at index : %d\n", ptr - str1);
        printf("Found in : %s\n", ptr);
    }
    else
        puts("String not found");

    return 0;
}