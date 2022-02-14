#include <stdio.h>
#include <stdbool.h>

float getArmor()
{
    float ret = 20.500000;
    return ret;
}

int hasSlowSkill()
{
    return 0;
}

int main()
{
    float armor;
    bool slow;

    armor = getArmor();
    slow = hasSlowSkill();

    printf("%f\n", armor);
    printf("%s\n", slow == true ? "true" : "false");
 
    return 0;
}