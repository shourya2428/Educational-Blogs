#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    //100 97 94 91....
    int a = 100;
    for(int i = 1;i <= n;i++){
    printf("%d\n",a);
    a = a-3;
    }//An = 100+(n-1)*(-3)=100+3-3n
    //103 - 3n > 0 = 3n<103 => n < 34.2 => n = 34
    
    return 0;}