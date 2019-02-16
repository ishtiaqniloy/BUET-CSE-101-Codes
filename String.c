#include <stdio.h>

void istrncpy(char  t[], char s[], int n){
    int i=0;
    while( (t[i]=s[i]) && i<n){
        i++;

    }
    t[i]=0;


}

void istrncat(char t[], char s[], int n){
    int i=0, j=0;

    while(t[i])
        i++;
    while( (t[i]=s[j]) && j<n){
        i++;
        j++;
    }
    t[i]=0;

}

int istrlen(char t[]){
    int i=0;

    while(  t[i] )
        i++;
    return i;

}

int istrncmp(char t[], char s[], int n){
    int i=0;
    while( (t[i]==s[i]) && t[i] && s[i] && i<n ){
        i++;
    }
    if(i==n)
        return 0;
    else
        return t[i]-s[i];



}

int istrfind( char s[], char t[]){
    int lenS, lenT, i, j, start;
    lenS=istrlen(s);
    lenT=istrlen(t);

    for(start=0; start<lenS; start++){
        i=start;
        j=0;
        while(s[i]==t[j]){
            i++;
            j++;
        if(j==lenT)
                return start;


        }

    }

    return -1;


}


int main(){
    char s[100], t[100];
    int len, n, p;

    gets(t);
    gets(s);
    //scanf("%d", &n);

    printf("t= %s\ns= %s\n", t, s);

    //istrncat(t, s, n);
    //len=istrlen(t);

    //len=istrncmp(t, s, n);

    //printf("After\nt= %s\ns= %s\nlength of t= %d\n", t, s, len);

    //printf("strcmp = %d\n", len);

    p=istrfind(s, t);

    printf("%d\n", p);

    return 0;
}
