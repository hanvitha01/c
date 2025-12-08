#include<stdio.h>
#include<string.h>

int main(){
    char a[20] = "hanvitha ";
    char b[20] = "gownipalli";

    char c[50];
    c[0] = '\0';
    // strcpy(c,a);
    // strcpy(c,b);

    strcat(c,a);
    strcat(c,b);

    printf("%s\n",c);
    return 0;

}