#include <stdio.h>
#include "static.h"

static int global_count = 0;

void myFunction()
{
    static int local_count = 0;   

    local_count++;
    global_count++;

    printf("local static variable  %d times\n", local_count);

}

int getGlobalCount()
{
    return global_count;
}

