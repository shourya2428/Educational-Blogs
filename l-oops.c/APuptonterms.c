#include<stdio.h>
void main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);//odd AP=(2n - 1)
    // even AP = 2n
    for(int i = 1;i <= 2+(n-1)*2;i++)
    if(i%2 == 0)
    {
    printf("%d\n",i);
    }
}