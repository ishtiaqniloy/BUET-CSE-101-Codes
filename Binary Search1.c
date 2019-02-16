#include <stdio.h>

int main(){
    long long int n, i, j, idx, min, t, target, last, first, mid;

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

    printf("Thus sorted\nGive the number to search\n");

    scanf("%I64d", &target);

    idx=-1;
    last=n-1;
    first=0;

    while(last>=first){
        mid=(last+first)/2;
        if(a[mid]==target){
            printf("Found %I64d at position %I64d", target, mid+1);
            return 0;
        }
        else if(a[mid]>target){
            last=mid-1;
        }
        else{
            first=mid+1;
        }
    }


    printf("%I64d not found", target);


    return 0;

}



