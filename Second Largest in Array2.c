#include <stdio.h>

int main(){
    int n, i, idx=0, max, sec;

    scanf("%d", &n);

    int a[n];

    scanf("%d %d", &a[0], &a[1]);

    max= a[0]>a[1]? a[0] : a[1];
    sec= a[0]+a[1]-max;

    for(i=2; i<n; i++){
        scanf("%d", &a[i]);

        if(a[i]>max){
            sec=max;
            max=a[i];
        }
        else if(a[i]>sec){
            sec=a[i];
        }

    }


    printf("%d\n", sec);




    return 0;

}


