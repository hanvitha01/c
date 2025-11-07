#include<stdio.h>
int sum_rec(int n){
    if (n<=1)
        return n;
    return n+sum_rec(n-1);
}

int sum_iter(int n){
    int i,res = 0;
    for(i=1;i<=n;i++){
        res+=i;
    }
    return res;
}

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);

    printf("\n using rec  sum = %d",sum_rec(n));
    printf("\n using iter  sum = %d",sum_iter(n));

    return 0;

}