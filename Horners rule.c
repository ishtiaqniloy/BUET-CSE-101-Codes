#include <stdio.h>

double horner (double a[], int n, double x){
    int i;
    double r=a[n];

    for(i=n; i>0; i--){
        //printf("A");
        r=a[i-1]+x*r;
    }


    return r;

}

int main(){
    int n, i;
    scanf("%d", &n);
    double x, a[n+1], r;
    scanf("%lf", &x);

    for(i=0; i<n+1; i++){
        scanf("%lf", &a[i]);
    }

    r= horner(a, n, x);

    printf("%lf\n", r);



    return 0;
}
