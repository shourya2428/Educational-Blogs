#include<stdio.h>
void main()
{ int n;
printf("enter a number: ");
scanf("%d", &n);
if(n % 5 == 0){
    if(n % 3 == 0){
        printf("The number is divisible by 5 and 3");
    }
    else{
    printf("It is not  divisible by 5 and 3");
    }
}}
