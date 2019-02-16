#include <stdio.h>

int main(){
    long long int n, i, j, idx, min, t;

    scanf("%I64d", &n);

    long long int  a[n];

    for(i=0; i<n; i++){
        scanf("%I64d",& a[i]);
    }

    for(i=0; i<n; i++){
        idx=i;
        min=a[idx];
        for(j=i+1; j<n; j++){
            if(a[j]<min){
                min=a[j];
                idx=j;
            }
        }

        t=a[i];
        a[i]=a[idx];
        a[idx]=t;

    }

    for(i=0; i<n; i++){
        printf("%I64d ", a[i]);
    }

    printf("\n");




    return 0;

}



