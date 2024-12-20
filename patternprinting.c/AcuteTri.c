#include<stdio.h>
void main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j <= n-i;j++){//for spaces
    printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d ",k);
        }
        printf("\n");
    }

}