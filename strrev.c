// The "str_rev" function reverses all the characters of a string except the terminating null character.

#include <stdio.h>

char *str_rev(char *str)
{
    int iStart = 0, iEnd = 0;
    char cTemp = '\0';

    while (str[iEnd] != '\0')
        iEnd++;
    iEnd--;

    while (iStart < iEnd)
    {
        cTemp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = cTemp;

        iStart++;
        iEnd--;
    }
    return str;
}

int main(void)
{
    char str[50] = "Marvellous";

    str_rev(str);

    printf(str);

    return 0;
}