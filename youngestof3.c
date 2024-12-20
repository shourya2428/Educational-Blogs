#include<stdio.h>
void main(){ 
    int r,s,a;// a,r,s are ages of ajay,ram and shyam respectively.
    printf("Enter Ajay's age a: ");
    scanf("%d",&a);
    printf("Enter Ram's age r: ");
    scanf("%d",&r);
    printf("Enter Shyam's age s: ");
    scanf("%d",&s);
    if(a < r && a < s){
        printf("a is youngest of 3");
    }
    if(r < s && r < a){
        printf("r is youngest of 3");
    }
    if(s < r && s < a){
        printf("s is youngest of 3");
    }
    }