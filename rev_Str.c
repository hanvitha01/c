#include <stdio.h>
#include <string.h>

int main() {
    char og[10] = "Hello";      
    int len = strlen(og);
    char rev[50];             
    for (int i = 0; i < len; i++) {
        rev[i] = og[len - 1 - i];
    }
    rev[len] = '\0'; 

    printf("Original: %s\n", og);
    printf("Reversed: %s\n", rev);

    return 0;
}
