//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

int main()
{
    char str[200], longest[100];
    int i = 0, start = 0;
    int length = 0, maxLength = 0, j;

    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            length = i - start;

            if (length > maxLength)
            {
                maxLength = length;

                for (j = 0; j < length; j++)
                {
                    longest[j] = str[start + j];
                }

                longest[length] = '\0';
            }

            start = i + 1;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("%s", longest);

    return 0;
}