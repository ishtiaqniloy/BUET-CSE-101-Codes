#include<stdio.h>

int main(){
    int a, b, m;
    scanf("%d %d", &a, &b);

    while(b!=0){
        m=a%b;
        a=b;
        b=m;

    }

    printf("GCD= %d\n", a);


    return 0;
}

