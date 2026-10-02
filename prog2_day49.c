//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>

int main()
{
    char name[100];
    int i = 0, last = 0;

    fgets(name, sizeof(name), stdin);

    /* Find the starting position of the surname */
    while (name[i] != '\0' && name[i] != '\n')
    {
        if (name[i] == ' ' && name[i + 1] != ' ')
            last = i + 1;

        i++;
    }

    /* Print initials except surname */
    printf("%c.", name[0]);

    for (i = 0; i < last - 1; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ' && i + 1 < last)
            printf("%c.", name[i + 1]);
    }

    /* Print surname */
    printf(" ");

    for (i = last; name[i] != '\0' && name[i] != '\n'; i++)
    {
        printf("%c", name[i]);
    }

    return 0;
}