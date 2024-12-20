//f(n) = n * f(n-1) -> Recurrence relation

#include<stdio.h>
int factorial(int n){
    int fact = 1;
    for(int i = 2;i <= n;i++){
        fact = fact * i;
    }
    return fact;
}

void main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d",fact);
}
