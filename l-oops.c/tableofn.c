#include<stdio.h>
void main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i = 1;i <= 10*n ;i++)
    if(i%n == 0)
    {
    printf("%d\n",i);
    }
}