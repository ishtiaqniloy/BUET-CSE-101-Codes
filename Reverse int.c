#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int n, len, i, temp, result=0, pow=1;
    char str[100], tempC[2]={};

    scanf("%d", &n);

    itoa(n, str, 10);

    len=strlen(str);

    for(i=0; i<len; i++){
        tempC[0]=str[i];
        temp=atoi(tempC);
        result+=temp*pow;
        pow*=10;
    }

    printf("%d\n", result);

    return 0;


}


