#include <stdio.h>

int main()
{
    int year;

    scanf("%d", &year);

    if (1 < year && year <= 4000)
    {
    if (year % 4 == 0 && year % 100 != 0)
    printf("%d", 1);
    else if (year % 400 == 0)
    printf("%d", 1);
    else 
    printf("%d", 0);
    }

    return (0);
}