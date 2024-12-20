#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",n);
    // For Composite-->
    int a = 0;
    for(int i = 2; i<=n-1;i++){// 2 is only even prime number.
        if(n%i == 0){//i is a factor of n
        a = 1;
        break;
         }
    }
    if (a == 0) printf("the given numberis prime %d\n",n);
    else printf("the given is composite %d\n",n);
    return 0;
}