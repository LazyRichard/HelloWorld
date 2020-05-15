#include <stdio.h>

#include "func1.h"
#include "func2.h"

int main(int argc, char *argv[])
{
    printf("Hello makefile!\n");

    print_func();

    printf("1 + 2: %d\n", sum_func(1, 2));

    return 0;
}