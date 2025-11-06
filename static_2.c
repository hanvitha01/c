////////////////min.c 
#include <stdio.h>

void myFunction();
int getGlobalCount();

int main()
{
    // Call the function multiple times
    myFunction();
    myFunction();
    myFunction();

    // Print total count from another file
    printf("global static variable %d\n", getGlobalCount());

    return 0;
}