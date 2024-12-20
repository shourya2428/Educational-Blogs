//square made with numbers
//ABCD,ASCII of A=65,a = 97
#include<stdio.h>
void main(){
    char ch;
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
                for(int j=1;j<=n-i;j++){//for ABC in different lines use j<=i
                    int d = a+64;
                     ch = (char)d;
            printf(" ");
            a++;}
            for(int k=1;k<=i;k++){
            printf("%c ",&ch);
        }
                
        printf("\n");
    }//no. of rows -> i, no. of columns -> j
}