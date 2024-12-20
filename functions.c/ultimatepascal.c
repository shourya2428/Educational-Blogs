//ncr+1 = n!/(r+1)!*(n-r-1)!
//ncr+1 = ncr*(n-r/r+1)
#include<stdio.h>
int main(){
int p;
printf("Enter p : ");
scanf("%d",&p);
for(int n = 0;n <= p;n++){
    int first = 1;
    for(int r = 0;r <= n;r++){
         printf("%d ",first);
 first = first * (n-r)/(r+1);    
}
printf("\n");
}
return 0;
}