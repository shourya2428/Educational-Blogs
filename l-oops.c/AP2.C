#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i = 4;i <= 4+(n-1)*3;i = i + 3)
    {
    printf("%d\n",i);
    }
    return 0;
}//4 7 10 13 16 .....upto n number of terms
    // we are going to use extra variable.
    