#include <stdio.h>
#include "hello_func.h"

int print_hello(int arg) {
    int ret = arg;
    if (ret == 0)
    {
        printf("Hello Mr Jenkins! Test Succeeded!\n");
    }
    else
    {
        printf("Hello Mr Jenkins! Test Failed!\n");
    }

    return ret;
}
