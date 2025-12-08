#include <stdio.h>
#include <string.h>

int main() {
    char source[20] = "Hello, World!";
    char destination[50] = "abcdefghijk";

    memcpy(destination, source, 6);   //take 5 bytes from src and put them in the strating address of destination.

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
