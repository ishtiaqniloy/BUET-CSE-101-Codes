#include <stdio.h>

void sort(int n, int a[n]){
    int i, j, min, idx, temp;

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

}

int main(){
    int n, i, count;

    scanf("%d", &n);

    int a[n];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);

    }

    sort(n, a);

    count=n;

    for(i=0; i<n-1; i++){
        if(a[i]==a[i+1])
            count--;
    }

    printf("%d\n", count);

    return 0;

}


