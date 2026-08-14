//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>
int main()
{ 
  int a,b;
  int sum,sub,mul,div;
  scanf("%d%d",&a,&b);
  sum=a+b;
  sub=a-b;
  mul=a*b;
  div=a/b;
  printf("sum=%d,sub=%d,mul=%d,div=%d",sum,sub,mul,div);
  return 0;
  }