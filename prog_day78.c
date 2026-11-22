Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *file;
    int ch;
    int vowels = 0, consonants = 0;

    file = fopen("text.txt", "r");

    if (file == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d", consonants);

    return 0;
}