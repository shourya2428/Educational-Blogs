#include<stdio.h>
void main(){// do a++ for natural numbers & do a=a+2 for odd numbers
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
                for(int j=1;j<=i;j++){
                   
            printf("%d ",a);
            a = a+2;
        }
        printf("\n");
    }}