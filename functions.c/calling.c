#include<stdio.h>
int main(){
    void india();
    india();//calling india '1'
    return 0;//'10'
}

void england(){
    void australia();
    printf("You are in england\n");//'6'
    return;//'7'
}
void australia(){
    void england();
    printf("You are in australia\n");//'4'
    england();//calling england '5'
    return;//'8'
}
void india(){
    printf("you are in india\n");//'2'
    australia();//calling australia '3'
    return;//'9'
}

//main()ek baar hi aata hai.
//program starts with main.
//unlimited functions.
