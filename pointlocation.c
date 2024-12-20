#include<stdio.h>
void main(){
    int x,y;
    printf("Enter the coordinates");
    scanf("%d %d",&x,&y);
    if(x == 0 && y == 0){          // reemember to write origin case first.
     printf("point lies on origin");}

   else if(x == 0){
        printf("point lies on y-axis");
    }
    else if(y == 0){
        printf("point lies on x-axis");
    }
    else{
        printf("point lies in x-y plane");
    }
}