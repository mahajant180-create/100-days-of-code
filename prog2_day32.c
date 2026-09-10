//#include <stdio.h>

int main()
//Q64: Find the digit that occurs the most times in an integer number.
/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
{
    long long n;
    int count[10] = {0};
    int digit, max = 0, result = 0, i;

    scanf("%lld", &n);

    // Make negative number positive
    if(n < 0)
    {
        n = -n;
    }

    // Count occurrence of each digit
    if(n == 0)
    {
        count[0] = 1;
    }
    else
    {
        while(n > 0)
        {
            digit = n % 10;
            count[digit]++;
            n = n / 10;
        }
    }

    // Find the most frequent digit
    // In case of a tie, smaller digit is selected
    for(i = 0; i <= 9; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}