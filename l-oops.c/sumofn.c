#include<stdio.h>
void main(){
    int n,sum = 0;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    for(int i = 1;i <= n;i++ ){
    sum +=1;//Add i to sum
        }
        printf("The sum of 1st %d natural numbers is: %d\n",sum);
        
}