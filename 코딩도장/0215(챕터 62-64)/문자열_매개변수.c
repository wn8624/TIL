#include <stdio.h>
void retString(char *s1)
{
    printf("Hello %s", s1);
}

int main()
{
    char *s1 = "World";
    retString(s1);
    return (0);
}