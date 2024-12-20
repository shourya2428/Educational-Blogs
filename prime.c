#include<stdio.h>
void main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i = 2; i<=n; i++){
        if(n%i == 0){
            printf("Not prime");
        }
    }
}