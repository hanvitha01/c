#include <stdio.h>
#include <string.h>

int main() {
    char original[10] = "Hello";      
    int len = strlen(original);
    char reversed[50];             
    for (int i = 0; i < len; i++) {
        reversed[i] = original[len - 1 - i];
    }
    reversed[len] = '\0'; 

    printf("Original: %s\n", original);
    printf("Reversed: %s\n", reversed);

    return 0;
}
