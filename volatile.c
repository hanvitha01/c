#include <stdio.h>

volatile int done = 0;

int main() {
    while (!done) {
        ;   
    }

    printf("Done!\n");
}
