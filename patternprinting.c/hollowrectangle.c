#include<stdio.h>
void main(){
    int n,m;
    printf("Enter no. of rows : ");
    scanf("%d",&m);
    printf("Enter number of columns : ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i == 1|| i == m || j == 1 || j == n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    }