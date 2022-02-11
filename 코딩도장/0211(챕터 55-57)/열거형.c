#include<stdio.h>

enum DaysOfWeek {
    Sunday = 0,
    Monday,
    Tuesday,
    Wendsday,
    Thursday,
    Friday,
    Saturday
};

int main()
{
    enum DaysOfWeek week;
    week = Tuesday;
    printf("%d\n", week);
    return (0);
}