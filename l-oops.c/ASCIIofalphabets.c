//capital case
#include<stdio.h>
int main(){
    //What is typecasting
    // int x = 65;
    // printf("%d\n",x);
    // char ch = (char)x;
    // printf("%c\n",ch);
    for(int i = 65;i <= 90;i++){
        char ch = (char)i;
        printf("%c -> ",ch);
         printf("%d\n",i);   
    }
    return 0;
}