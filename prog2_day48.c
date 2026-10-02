//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, start, end, j;
    char temp;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n')
    {
        while (str[i] == ' ')
            i++;

        start = i;

        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
            i++;

        end = i - 1;

        for (j = start; j < end; j++, end--)
        {
            temp = str[j];
            str[j] = str[end];
            str[end] = temp;
        }
    }

    printf("%s", str);

    return 0;
}