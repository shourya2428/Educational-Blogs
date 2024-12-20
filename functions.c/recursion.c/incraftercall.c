#include<stdio.h>
void increasing(int n){
    if(n == 0){return;}  // base case
    printf("%d\n",n);// code
 increasing(n-1);// call
 printf("%d\n",n);// code
     return;
    }
void main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    increasing(n);
}