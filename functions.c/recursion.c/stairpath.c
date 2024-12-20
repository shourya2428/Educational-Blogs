#include<stdio.h>
int stair(int n){
    if(n<=3)return n;
    int totalways = stair(n-1) + stair(n-2)+stair(n-3);
    return totalways;
}
void main(){
int n;
printf("enter stair number : ");
scanf("%d",&n);
int totalways = stair(n);
printf("%d\n",totalways);
}//triple step valid 