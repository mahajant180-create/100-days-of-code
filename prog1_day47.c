//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};
    int i = 0;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0' && str1[i] != '\n')
    {
        freq[(unsigned char)str1[i]]++;
        i++;
    }

    i = 0;

    while (str2[i] != '\0' && str2[i] != '\n')
    {
        freq[(unsigned char)str2[i]]--;
        i++;
    }

    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}