#include<unistd.h>

int main(void)
{
    char    even;
    char    odd;

    even = 'Z';
    odd = 'y';
    while (even >= 'B')
    {
        write(1, &even, 1);
        write(1, &odd, 1);
        even -= 2;
        odd -= 2;
    }
    write(1, "\n", 1);
    return (0);
}