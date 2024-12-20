#include<stdio.h>
void sum(int n,int s){
    if(n==0)return;
    sum(n-1,s+n);
    return;
}
void main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
   sum(n,0);
}