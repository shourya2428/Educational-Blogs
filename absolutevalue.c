#include<stdio.h>
int fun(){
    static int count = 0;
    count++;
    return count;
}
int main(){
    
}