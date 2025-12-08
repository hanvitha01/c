#include <stdio.h>
#include <string.h>

int main() {

    int a = 20;
    int b = 10;
    
    printf("Value of b before calling memcpy: %d\n", b);

    memcpy(&b, &a, sizeof(int)); 

    printf("Value of b after calling memcpy: %d\n", b);

    return 0;
}