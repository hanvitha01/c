#include<stdio.h>
int fact_rec(int n){
    if (n<=1)
        return 1;
    return n * fact_rec(n-1);
}

int fact_iter(int n) {
    int i;
    int result = 1;
    for(i=1;i<=n;i++){
        result *= i;
    }
    return result;
}

int main() {
    int n;

    printf("enter the number: ");
    scanf("%d",&n);

    printf("\nusing reccursion: %d = %d ",n, fact_rec(n));
    printf("\nusing iteration: %d = %d ",n, fact_iter(n));

    return 0;

}