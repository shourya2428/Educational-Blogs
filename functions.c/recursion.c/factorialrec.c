#include<stdio.h>
int factorial(int n){
    if(n == 1 ||n == 0) return 1;
     return n*factorial(n-1);
}
void main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d",fact);
}