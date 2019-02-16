#include<stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);

    for(i=2; i*i<=n; i++){
        if(n%i==0){
            printf("Not prime\n");
            break;
        }
    }

    if(i*i>n)
        printf("Prime\n");


    return 0;
}

