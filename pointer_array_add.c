#include<stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Address of arr: %p\n",arr);
    printf("Address of &arr[0]:%p\n",&arr[0]);  
    printf("Address of arr + 1:%p\n",arr + 1);
    printf("Address of &arr[1]:%p\n",&arr[1]);
    printf("Address of next array:%p",&arr+1);

    return 0;
}