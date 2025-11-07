// #include<stdio.h>

// void change(int a){
//     a = 10;
//     printf("%d\n",a);
// }

// void change_pointer(int *b){
//     *b =30;
// }

// int main(void){
//     int x = 50;

//     change(x);
//     printf("value of x without pointers: %d\n",x);
    
//     change_pointer(&x);
//     printf("value of x with pointer: %d",x);

// }

#include<stdio.h>

int main(){
    int i = 10,*p_i = &i;

    char c = 'c',*p_c = &c;
    float f = 7.89,*p_f = &f;
    unsigned long u = 1000000000,*p_u = &u;


    printf("value of i: %d\n",i);
    printf("value of i+1: %d\n",i+1);
    printf("value of i-1: %d\n",i-1);
    printf("original address of i: %p\n", p_i);
    printf("adress of i+1 %p\n", p_i+1);
    printf("adress of i-1 %p\n\n", p_i-1);

    printf("value of c: %c\n",c);
    printf("value of c+1: %c\n",c+1);
    printf("value of c-1: %c\n",c-1);
    printf("original address of c: %p\n", p_c);
    printf("adress of c+1 %p\n", p_c+1);
    printf("adress of c-1 %p\n\n", p_c-1);

    printf("value of f: %f\n",f);
    printf("value of f+1: %f\n",f+1);
    printf("value of f-1: %f\n",f-1);
    printf("original address of f: %p\n", p_f);
    printf("adress of f+1 %p\n", p_f+1);
    printf("adress of f-1 %p\n\n", p_f-1);

    printf("value of u: %u\n",u);
    printf("value of u+1: %u\n",u+1);
    printf("value of u-1: %u\n",u-1);
    printf("original address of u: %p\n", p_u);
    printf("adress of u+1 %p\n", p_u+1);
    printf("adress of u-1 %p\n", p_u-1);
    // printf("adress of u/2 %p\n",p_u/2);

}