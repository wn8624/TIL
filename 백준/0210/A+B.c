#include<stdio.h>
int main()
{
    int count, a, b;
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d \n", i, a, b, a+b);
    }
    return (0);
}