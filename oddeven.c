//n%2=0 means n is divisible by 2
// n is even.
#include"stdio.h"
int main()
{
    int x;//box made
    printf("enter a number: ");
    scanf("%d",&x);//value put in box
    if(x%2==0)
     printf("even number");
     else
        printf("odd number");
     return 0;
}
//if in if-else statement we have to print 1 line -
//each then we can remove curly brackets.