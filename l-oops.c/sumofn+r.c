#include<stdio.h>
int main(){
    int n; 
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    int lastDigit = 0;
    int r = 0;
    while(n>0){
        lastDigit = n%10;
        sum += lastDigit;
        r = r * 10;
        r = r + (n % 10);
       n = n/10; 
       }
       sum = n + r ;
       
           printf("The sum of given number and its reverse is  %d",sum)
     return 0;
    }