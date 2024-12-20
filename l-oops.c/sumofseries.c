#include<stdio.h>
void main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
  //1+2+3+4...
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    printf("The sum is : %d\n",sum);
}