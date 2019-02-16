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
    int n, i, target, last, first, mid;

    scanf("%d %d", &n, &target);

    int a[n];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);

    }

    sort(n, a);

    last=n-1;
    first=0;
    while(last>=first){
        mid=(last+first)/2;

        if(target==a[mid]){
            printf("Found\n");
            return 0;
        }

        else if( target>a[mid] ){
            first=mid+1;
        }

        else{
            last=mid-1;
        }

    }

    printf("Not found");

    return 0;

}


