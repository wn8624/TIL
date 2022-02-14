#include<stdio.h>
int main()
{  
    int num1 = 32;
    int num2 = 7;
    float num3;
    
    num3 = num1 / num2;  //37 /7  >4가 담길 듯
    printf("%f\n", num3); // 4.00000

    num3 = (float)num1 / num2; //실수 / 정수가 되어 결과는 실수로 나온다.
    printf("%f\n", num3);

    return (0);
}