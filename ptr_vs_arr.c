#include <stdio.h>

int main() {
    char str[] = "hello";
    char *ptr  = "hello";

    str[0] = 'H';    
    // ptr[0] = 'H'; 

    printf("str = %s\n", str);
    printf("ptr = %s\n", ptr);
    printf("str = %c\n", str[1]);
    // printf("ptr = %s\n", ptr[0]);  //segmentation fault
    

    return 0;
}
