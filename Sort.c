#include <stdio.h>

int main(){
    int n, i, j, min, idx, temp;
    scanf("%d", &n);
    int a[n];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++){
        min=a[i];
        idx=i;
        for(j=i+1; j<n; j++){
            if(a[j]<min){
                min=a[j];
                idx=j;
            }
        }

        temp=a[i];
        a[i]=a[idx];
        a[idx]=temp;

    }

     for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;

}
