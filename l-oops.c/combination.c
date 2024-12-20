#include<stdio.h>
void main(){
    int n,r;
    scanf("%d %d",&n,&r);
    int nfact=1,rfact=1,nrfact=1;
     for(int i = 2;i <= n;i++){
        nfact = nfact*i;
     }
     for(int i = 2;i <= r;i++){
        rfact = rfact*i;
     }
for(int i = 2;i <= n - r;i++){
        nrfact = nrfact*i;
     }
     
    int ncr = nfact/(rfact * nrfact);
     printf("%d\n",ncr);

}