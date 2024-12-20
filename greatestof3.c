#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    if(a > b && a > c){
        printf("a is greatest of 3");
    }
    if(b > c && b > a){
        printf("b is greatest of 3");
    }
    if(c > a && c > b){
        printf("c is greatest of 3");
    }
}