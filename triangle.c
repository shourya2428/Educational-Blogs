#include<stdio.h>
void main(){
    int a,b,c;//a,b & c are sides of triangle
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");//here && is used to prevent multiple
    // execution of valid triangle statement.
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    if(a + b > c && b + c > a && c + a >b){
        printf("Valid triangle");
    }
    else{
        printf("Invalid triangle");
    }
    }
