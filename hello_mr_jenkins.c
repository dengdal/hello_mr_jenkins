#include <stdio.h>
#include <string.h>
#include "hello_func.h"

int main(int argc, const char *argv[])
{
    int fail_the_test = 1;
    int ret = 0;
    if (argc != 2)
    {
        printf("Program failed. Please provide exactly one argument: < p, f >\n");
        ret = 1;
        return ret;
    }
    else
    {
        if (strcmp(argv[1],"-p") == 0) // Pass the test if given -p
        {
            fail_the_test = 0;
        }
        ret = print_hello(fail_the_test);
        return ret;
    }
}
