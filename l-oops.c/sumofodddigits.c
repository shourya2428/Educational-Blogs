#include<stdio.h>
int main(){
    int n;
    int sum = 0;
    int lastDigit = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
  if(n %2 !=0){
    lastDigit = n%10;
    sum += lastDigit;
  }
  n = n/10;
 }
 printf("The value of sum of od digits is %d",sum);
 return 0;}