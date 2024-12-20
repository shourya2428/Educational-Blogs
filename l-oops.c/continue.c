#include<stdio.h>
void main(){
    
    for(int i = 1;i <= 100;i++){
        if(i %2 == 0){//conditions switched because of continue.
    continue;
    }
    printf("%d ",i);}
}