#include <stdio.h>

int main()
{
    int result = 0;
    int num;
    int arr[10];

    for (int i=0; i<10; i++)
    {
        scanf("%d", &num);
        arr[i] = num % 42;
    }

    for(int i=0; i<10; i++) {
        int count = 0;
        for(int j=i+1; j<10; j++) { // 서로 같은 수일 경우
            if(arr[i] == arr[j]) count++;
        } 
        if (count == 0) result++;
    }
    printf("%d\n", result);
    return (0);
}