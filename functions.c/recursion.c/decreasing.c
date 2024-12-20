#include<stdio.h>
void greeting(int n){
    if(n == 0){return;}
    printf("%d\n",n);
    greeting(n-1);
     return;
    }
void main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    greeting(n);
}