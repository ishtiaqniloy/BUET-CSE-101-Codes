#include <stdio.h>
#include <stdlib.h>


int cmpfunc (const void * b, const void * a)
{
   return ( *(int*)a - *(int*)b );
}

int main(){
    long long int n, i, idx, target, last, first, mid;

    scanf("%I64d", &n);

    long long int  a[n];

    for(i=0; i<n; i++){
        scanf("%I64d",& a[i]);
    }

    qsort(a, n, sizeof(long long int), cmpfunc);

    printf("Give the number to search\n");

    scanf("%I64d", &target);

    idx=-1;
    last=n-1;
    first=0;

    while(last>=first){
        mid=(last+first)/2;
        if(a[mid]==target){
            printf("Found %I64d\n", target);
            return 0;
        }
        else if(a[mid]>target){
            last=mid-1;
        }
        else{
            first=mid+1;
        }
    }


    printf("%I64d not found\n", target);


    return 0;

}



