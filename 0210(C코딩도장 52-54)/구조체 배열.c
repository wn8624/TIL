#include <stdio.h>

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D p[3] = { 0, };

    for(int i = 0; i < 3; i++)
        printf("%d %d\n",p[i].x, p[i].y);
    return (0);
}