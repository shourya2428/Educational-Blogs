#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2)return 1;
    int a1 = fibo(n-1);
    int a2 = fibo(n-2);
    int a = a1 + a2;
    return a;
}//Multiple calls
int  main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}