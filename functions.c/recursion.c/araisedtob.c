#include<stdio.h>
int power(int a,int b){
    if(b==0)return 1;
    int recAns = a*power(a,b-1);
    return recAns;
}
void main(){
    int a;
    printf("Enter base : ");
    scanf("%d",&a);
    
    int b;
    printf("Enter expo : ");
    scanf("%d",&b);

    int p = power(a,b);
    printf("%d raised to power %d is : %d\n",a,b,p);
    }