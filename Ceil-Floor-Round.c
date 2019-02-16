#include<stdio.h>

int main(){
    double n, temp;
    int ceil, floor, round;

    scanf("%lf", &n);


    if(n>=0){
        floor= (int) n;

        ceil= (int) (n+1);
        if(floor==n)
            ceil-=1;

        round=(int) (n+0.5);

    }

    else{
        ceil= (int) n;

        floor= (int) (n-1);
        if(ceil==n)
            floor+=1;

        round= (int) (n-0.5);
        temp= (int) n - 0.5;
        if(temp==n)
        round+=1;

    }

    printf("Ceil= %d Floor= %d Round= %d\n", ceil, floor, round);



    return main();
}

