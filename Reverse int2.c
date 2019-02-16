#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int n, len, i, temp, result=0, power;
    char str[100];

    scanf("%d", &n);

    itoa(n, str, 10);

    len=strlen(str);

    len--;

    power=pow(10, len)+1;   //don't know shit about why it does not work without +1

    //printf("starting power= %d\n", power);

    while(n>0){
        result+=(n%10)*power;
        n/=10;
        power/=10;
        //printf("%d %d %d\n", n, power, result);
    }

    printf("%d\n", result);

    return 0;


}


