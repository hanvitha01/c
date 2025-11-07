#include "static.h"
#include <stdio.h>

int main()
{
    myFunction();
    myFunction();
    myFunction();

    printf("global static variable %d\n", getGlobalCount());

    return 0;
}