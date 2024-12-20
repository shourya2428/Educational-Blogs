#include<stdio.h>
void main(){
    char ch;
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
          for(int j=1;j<=i;j++){//for ABC in different lines use j<=i
                    int d = a+64;
                     a++;
                     ch = (char)d;
                     if(i % 2 == 0){
            printf("%c ",ch);
           }
            else{
                printf("%d ",j);
            }
        printf("\n");
    }//no. of rows -> i, no. of columns -> j
}}