#include <stdio.h>

int str_len(char *str)
{
    int iLength = 0;

    while (*(str + iLength) != '\0')
        iLength++;

    return iLength;
}

int main(void)
{
    char arr[20] = "Jay Ganesh";

    printf("%d", str_len(arr));

    return 0;
}