#include <stdio.h>

int testBit(int n, int b){
    int r, m=1;
    m=m<<b;
    r=n&m;

    if(r!=0)
        return 1;
    else
        return 0;

}

printBits(int n){
    int i, s, b;
    s=8*sizeof(int);

    for(i=s-1; i>=0; i--){
        if(i!=s-1 && (i+1)%4==0)
            printf(" ");
        b=testBit(n,i);
        printf("%d", b);
        if(i==0)
            printf("\n");

    }

}

int bitparity( int x ){
    int i, n, count=0;
    n=8* sizeof(int);

    for(i=0; i<n; i++){
        if(testBit(x, i)==0)
            count++;
    }

    count%=2;

    return count;


}

void matchBits( int x, int y ){
    int i, n;
    n=8*sizeof(int);
    for( i=0; i<n; i++){
        if(testBit(x, i)==testBit(y, i))
            printf("%d ", i);
    }
    printf("\n");

}

int setBit(int n, int p){
    int r, m=1;
    m= m<<p;
    r=n|m;
    return r;

}

int resetBit(int n, int p){
    int r, m=1;
    m=m<<p;
    m=~m;
    r=n&m;
    return r;
}

int setBits(int n, int p, int b){
    int r, m=1, i;
    r=n;
    m=m<<p;
    for(i=0; i<b; i++){
        r=r|m;
        m=m>>1;
    }
    return r;
}

int resetBits(int n, int p, int b){
    int r, i;
    r=n;
    for(i=0; i<b; i++){
        r=resetBit(r, p-i);
    }

    return r;

}

int leftShift(int  n, int b){
    int r;
    r=n<<b;

    return r;

}

int rightShift(int  n, int b){
    int r;
    r=n>>b;

    return r;

}

int extractBits( int n, int b){
    int m= ~(~0<<b);

    return (n&m);
}



int main(){
    int n, m, x, o, r;

    scanf("%d %d", &n, &m);
    printBits(n);

    /*r=leftShift(n,m);
    printf("%d\n", r);
    printBits(r);

    r=rightShift(n,m);
    printf("%d\n", r);
    printBits(r);
    */
/*
    r=extractBits(n,m);
    printf("%d\n", r);
    printBits(r);
*/



    return main();


}


