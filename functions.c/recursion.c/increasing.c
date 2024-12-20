#include<stdio.h>
void increasing(int x,int n){
    if(x > n){return;}
    printf("%d\n",x);
   increasing(x+1,n);
     return;
    }
void main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    increasing(1,n);
}