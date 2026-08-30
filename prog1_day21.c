\\Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, first, last, digits, middle, result;

    scanf("%d", &n);

    if (n < 10)
    {
        printf("%d", n);
        return 0;
    }

    temp = n;
    last = n % 10;
    digits = 0;

    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    first = n / (int)pow(10, digits - 1);
    middle = (n % (int)pow(10, digits - 1)) / 10;

    result = last * (int)pow(10, digits - 1) + middle * 10 + first;

    printf("%d", result);

    return 0;
}