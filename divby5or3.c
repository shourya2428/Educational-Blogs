#include<stdio.h>
void main()
{ int n;
printf("enter a number: ");
scanf("%d", &n);
if(n % 5 == 0 || n % 3 == 0){
    printf("It is divisible by 5 or 3");
    }
else {
    printf("It is not divisible by 5 or 3");
}}