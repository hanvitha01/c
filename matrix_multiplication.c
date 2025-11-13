#include <stdio.h>

int main() {
    int a[3][3], b[3][3], result[3][3] = {0};
    int i, j, k;

    printf("enter elements of matrix a:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("enter elements of matrix b:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            for(k = 0; k < 3; k++)
                result[i][j] += a[i][k] * b[k][j];

    printf("\nresultant matrix (a*b):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++)
            printf("%5d ", result[i][j]);
        printf("\n");
    }

    return 0;
}
