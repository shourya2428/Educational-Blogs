#include<stdio.h>
int main(){
    int i;//infinite loop
    while(i=10){
        printf("%d\n",i);
        i+=1;
    }
    return 0;
}