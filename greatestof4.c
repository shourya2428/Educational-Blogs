#include<stdio.h>
void main(){
    int a,b,c,d;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    printf("Enter d: ");
    scanf("%d",&d);
    if(a > b && a > c && a > d){
        printf("a is greatest of 4");
    }
    if(b > c && b > a && b > d){
        printf("b is greatest of 4");
    }
    if(c > b && c > a && c > d){
        printf("c is greatest of 4");
    
    }
    if(d > b && d > c && d > a){
        printf("d is greatest of 4");
    }}
