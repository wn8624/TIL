#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int n)
{
    if  (n == 0 ) return 0;
    if (n == 1) return 1;
    return fib(n-1) + fib(n-2); 
}

int main()
{
    int num1;

    scanf("%d", &num1);

    printf("%d\n", fib(num1));

    return 0;
}