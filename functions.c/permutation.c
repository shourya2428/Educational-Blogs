#include<stdio.h>
void main(){
    int n,r;
 scanf("%d %d",&r,&n);
    int nfact=1;
    int nrfact=1;
    for(int i=2;i<=n;i++){
        nfact *= i;
    }
    for(int i=2;i<=n-r;i++){
        nrfact *= i;
    }
    int npr = nfact/nrfact;
    printf("%d\n",npr);
}