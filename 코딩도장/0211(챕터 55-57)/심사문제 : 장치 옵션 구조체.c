#include <stdio.h>

struct DeviceOption {
    unsigned char boot;
    unsigned char interrupt;
    unsigned char option = ; 
    option = boot + interrupt;
};

int main()
{
    struct DeviceOption opt;

    opt.boot = 0x22;
    opt.interrupt = 0x11;

    printf("0x%x\n", opt.option);

    return 0;
}