#include<stdio.h>
void main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    //ternary operator - single line way to write if-else.
    //exp1 ? exp2 : exp3
   x%2 == 0 ? printf("Even number") : printf("Odd number");
}
//';' is not used after if statement.