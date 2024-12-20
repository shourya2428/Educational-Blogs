//f(n) = n * f(n-1) -> Recurrence relation

 #include<stdio.h>
 void main(){
int a[4] = {1,3,5,7}; 
a[3] = 25;//3rd index value changed from 7 to 25.
printf("%d\n",a[3]);
float b[3] = {2.3,4.5,6.9};
printf("%f\n",b[1]);
char c[5] = {'a','f','Q','W','@'};
printf("%c\n",c[2]);
}
