#include<stdio.h>

int main(){
    int n, i, p1, p2, t;
    scanf("%d", &n);

    p1=0;
    p2=1;

    if(n==0){
        printf("%d\n", p1);
        return 0;
    }

    for(i=2; i<=n; i++){
        t=p1+p2;
        p1=p2;
        p2=t;
    }

    printf("%d\n", p2);


    return 0;
}

