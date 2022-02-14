#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getName()
{
    char *ret = malloc(sizeof(char));
    strcpy(ret, "Neptune");
    
    return ret;
}



int main()
{
    char *name;

    name = getName();
 
    printf("%s\n", name);

    free(name);

    return 0;
}