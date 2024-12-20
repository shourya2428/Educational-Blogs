#include<stdio.h>
int main(){
    int n;//n = no of times condition will execute.
    printf("Enter a number : ");
    scanf("%d",&n);
    // 1 2 4 8 16 32...//or n = no of terms.
    int a = 1;
    for(int i = 1;i<=n;i++){
        printf("%d",a);
        a = a*2;
    }
    return 0;}
    