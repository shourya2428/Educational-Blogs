#include<stdio.h>
void main(){ 
    int i,n;
    scanf("%d",&n);
    int e_count = 0;
    int o_count = 0;
    for(int i = 1; i <= n; i++){
        if (i%2 == 0){
            e_count++;
        }
        else
        o_count++;
    }  
    printf("%d\n%d",e_count,o_count);
}