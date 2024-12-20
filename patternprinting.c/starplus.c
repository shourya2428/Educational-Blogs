#include<stdio.h>
void main(){
    int n,m;
    printf("Enter no. of rows : ");
    printf("Enter number of columns : ");
    scanf("%d %d",&m,&n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(j==(n+1)/2 || i==(m+1)/2){
                printf("$");
            }
            else{
                printf("@");
            }
        }
        printf("\n");
    }
    }