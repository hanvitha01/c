#include <stdio.h>

//Global static variable
static int global_count = 0;

//Function with local static variable
void myFunction()
{
    static int local_count = 0;   // static local variable

    local_count++;
    global_count++;

    printf("local static variable  %d times\n", local_count);
}

//Function to get total calls using global static variable
int getGlobalCount()
{
    return global_count;
}

