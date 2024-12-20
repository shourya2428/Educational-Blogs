#include"stdio.h"
void main(){
     int SP,CP;
     printf("Enter SP AND CP: ");
     scanf("%d %d", &SP, &CP);
     if(SP < CP){
        printf("Seller incurred loss");
     }
     else if(CP < SP){
        printf("Seller has made profit");
     }
     else{
        printf("No profit,no loss");
     }
}