#include<stdio.h>

int main(){
    int a, b, i;
    scanf("%d %d", &a, &b);

    i= a>b? a : b;


    while( i%a!=0 || i%b!=0 ){
        i++;
    }

    printf("LCM = %d\n", i);


    return 0;
}

