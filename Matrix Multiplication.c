#include <stdio.h>


int main(){
    int r1,c1,r2,c2, i, j, k, sum=0;


    printf("Enter matrix dimensions\n");
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

    if(c1!=r2)
        exit(1);

    int a[r1][c1], b[r2][c2], c[r1][c2];

    printf("Enter matrix 1\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++)
            scanf("%d", &a[i][j]);
    }

    printf("Enter matrix 2\n");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++)
            scanf("%d", &b[i][j]);
    }

    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            sum=0;
            for(k=0; k<c1; k++){
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }

    }

    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }






    return 0;
}
