#include <stdio.h>

int main()
{
    int max = 0, arr[9], index;
    for (int i=0; i<9; i++)
    {
        scanf("%d", &arr[i]);
        if  (max < arr[i])
        {
            max = arr[i];
            index = i;
        }
    }
    printf("%d\n%d", max, index + 1);
    return (0);
}