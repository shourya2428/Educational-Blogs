#include<stdio.h>
int main(){
    int n;
    printf("ewnter a number: ");
    scanf("%d",&n);
// n! = n*(n-1)*(n-2)*. . . 3*2*1.
int product = 1;
for(int i=1;i<=n;i++){
    product = product*i;
    printf("The factorial of %d is: %d\n",i,product);
}
return 0;
}
//n! = n*(n-1)!
