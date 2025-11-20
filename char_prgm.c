#include <stdio.h>

void func2(char *names[]){
    printf("f222222: names[0] address : %p\n", names[0]);
    printf("f2: string at names[0]: %s\n\n", names[0]);

    names[0] = "A";
    
    printf("f2: names[0] address : %p\n", names[0]);
    printf("f2: string at names[0]: %s\n", names[0]);

    printf("%s\n", names[0]); 
}

void func_1(){
    char *names[] = {"abhi", "Lyptus", "tech"};

    printf("f1: names[0] address : %p\n", names[0]);
    printf("f1: string at names[0]: %s\n", names[0]);

    printf("f1: address of literal \"abhi\" : %p\n\n", (void*)"abhi");
    func2(names);            

    printf("after func2 return:\n");
    printf("names = %s, %s, %s\n", names[0],names[1],names[2]);
    // printf("names[1] = %s\n", names[1]);
    // printf("names[2] = %s\n", names[2]);

}

int main(){
    func_1();
    return 0;
}
