#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    //1-2+3-4+5-6 odd term series.
    int sum = 0;
    for(int i = 0;i<=n;i++) {
        if (i%2==0) sum = -n/2+n;
}
printf("The sum is: %d",sum);
    return 0;
}