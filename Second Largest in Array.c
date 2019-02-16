#include <stdio.h>

int main(){
    int n, i, idx=0, max, sec;

    scanf("%d", &n);

    int a[n];


    scanf("%d", &a[0]);
    max=a[0];

    for(i=1; i<n; i++){
        scanf("%d", &a[i]);
        if(a[i]>max){
            max=a[i];
            idx=i;
        }
    }

    sec=a[0];
    for(i=0; i<n; i++){
        if(sec<a[i] && i!=idx){
            sec=a[i];
        }
    }

    printf("%d\n", sec);




    return 0;

}


