#include<stdio.h>
int main(){
int p;
printf("Enter p : ");
scanf("%d",&p);
int q;
printf("Enter q : ");
scanf("%d",&q);
int r = p;
p = q;
q = r;
printf("%d %d",p,q);
return 0;
}

