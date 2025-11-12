#include <stdio.h>

int main() {
    int i_arr[3][2];
    char c_arr[3][2];
    float f_arr[3][2];

    printf("integer 2d array\n");
    printf("address of first element : %x\n", i_arr);
    printf("address after 2d array   : %x\n\n", &i_arr + 1);

    printf("character 2d array\n");
    printf("address of first element : %x\n", c_arr);
    printf("address after 2D array   : %x\n\n", &c_arr + 1);

    printf("float 2d array\n");
    printf("address of first element : %x\n", f_arr);
    printf("address after 2d array   : %x\n", &f_arr + 1);

    return 0;
}
