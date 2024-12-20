#include<stdio.h>
void main(){
    int x = 3,y,z;
    y = x = 10;//1st x then y becomes 10.
    z = x < 10;// false stat since x is not less than 10.
    printf("x = %d\n y = %d\n z = %d\n",x,y,z); 
}