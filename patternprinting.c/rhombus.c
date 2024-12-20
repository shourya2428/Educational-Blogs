#include<stdio.h>
void main(){//ultaTriangle + Square
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    for(int i=0;i< n;i++){
            for(int j=0 ;j < n-i-1; j++){
            printf(" ");
        }
        for(int j=0;j<n;j++){
            printf("* ");
        }
        printf("\n");}
        }
        