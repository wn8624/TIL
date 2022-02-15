#include <stdio.h>

void setAttackSpeed(float speed)
{
    printf("Attack Speed: %f\n", speed);
}

int main()
{
    setAttackSpeed(0.638f);
    setAttackSpeed(1.23f);

    return 0;
}