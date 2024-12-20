#include<stdio.h>
void main(){
     int x;
     printf("Enter the year: ");
     scanf("%d",&x);
     if(x % 4 == 0){
        printf("Yes, it is a leap year");
     }
     else{
        printf("Not a leap year");
     }
}
//left shift by 1 unit 4<< value increases
//Right Shift by 1 unit >>5 value decreases
//XOR Operation - 0+0=0, 1+1=0, 1+0=1, 0+1=1
//For Loop-