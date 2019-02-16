#include <stdio.h>
#include <string.h>

int main(){
    int n, i, t, r;
    char str[100]={};

    scanf("%d", &n);

    for(i=0; ;i++){
        t=n%10;
        n/=10;
        str[i]=t+'0';
        if(n==0)
            break;

    }

    str[i+1]=0;

    r=atoi(str);

    printf("%d\n", r);

    return 0;

}


