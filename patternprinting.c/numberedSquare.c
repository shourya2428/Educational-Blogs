//square made with numbers
#include<stdio.h>
void main(){
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
            printf("%d ",j);
        }
        printf("\n");
    }//no. of rows -> i, no. of columns -> j
}