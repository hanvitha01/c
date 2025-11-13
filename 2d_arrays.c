// #include<stdio.h>

// int main(){
//     int arr[5][2] = {
//         {10,20},
//         {30,40},
//         {50,60},
//         {70,80},
//         {90,100}
//     };

//     int *ptr1 = arr[0];       
//     int *ptr2 = &arr[0][0]; 
//     // int *ptr3 = arr;
//     // int *ptr4 = &arr;
//     // int *ptr5 = &arr[0];

//     printf("ptr1 = %p\n",*ptr1);
//     printf("ptr2 = %p\n",*ptr2);
//     // printf("ptr3 = %p\n",*ptr3);
//     // printf("ptr4 = %p\n",*ptr4);
//     // printf("ptr5 = %p\n",*ptr5);

//     return 0;
// }


#include <stdio.h>

int main() {
    int arr[5][2] = {
        {10, 20},
        {30, 40},
        {50, 60},
        {70, 80},
        {90, 100}
    };

    int *ptr1 = arr[0];
    int *ptr2 = &arr[0][0];

    printf("ptr1 = %p, value = %d\n", ptr1, *ptr1);
    printf("ptr2 = %p, value = %d\n\n", ptr2, *ptr2);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            printf("arr[%d][%d] = %d\t Address = %p\n",i, j, arr[i][j], &arr[i][j]);
        }
    }

    return 0;
}

