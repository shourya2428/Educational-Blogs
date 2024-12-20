#include"stdio.h"
int main()
{  
     int x;
    printf("Enter a number: ");// agar sabme if statement dalenge toh saare if ek saath execute ho jayenge.isliye use else if instead of if
    scanf("%d",&x);
    if(90<=x<=100){
        printf(" mazelo topper");
    }
    else if(75<=x<=89){
        printf("Good work");
    
    }else if(60<=x<=74){
        printf("C grade");
    }
    else if(x<=60){
        printf("congrats rasgulle,mishtidoi");
    }
 return 0;
}