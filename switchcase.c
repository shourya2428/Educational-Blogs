#include<stdio.h>
void main(){
    int x = 4 ;
    printf("Enter x: ");
    scanf("%d",&x);
    switch(x){
        case 1:{
            printf("bhang op");
            break;
        }
        case 2:{
            printf("Rasgulle phaad");
            break;
        }
        case 3:{
            printf("Gulabjamun");
            break;
        }
        case 4:{
            printf("poora saal moj");
            break;
        }
        default:{
            printf("Value out of range");
        }

    }
}
