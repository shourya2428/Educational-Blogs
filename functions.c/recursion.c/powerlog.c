#include<stdio.h>
int powerlog(int a,int b){
    if(b==0)return 1;
    int x = powerlog(a,b/2);
    if(b % 2 == 0)
        return x*x;
    else
        return x*x*a;
    
}
void main(){
    int a;
    printf("Enter base : ");
    scanf("%d",&a);
    int b;
    printf("Enter expo : ");
    scanf("%d",&b);
    int p = powerlog(a,b);
    printf("%d raised to power %d is : %d\n",a,b,p);
    }
    