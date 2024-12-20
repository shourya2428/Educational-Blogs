#include<stdio.h>
int main(){
int a;
printf("Enter a : ");
scanf("%d",&a);

int b;
printf("Enter b : ");
scanf("%d",&b);

 a = a + b;
 b = a - b;
 a = a - b;//used to swap 2 numbers without using a 3rd variable
 printf("Value of a is : %d\n",a);
 printf("Value of b is : %d\n",b);
 return 0;
}