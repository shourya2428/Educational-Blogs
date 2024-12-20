#include<stdio.h>
int maze(int m,int n){

}
int main(){
    int m;//no of rows
    printf("Enter number of rows of maze : ");
    scanf("%d",&m);
    int n;
    printf("Enter no of columns of maze : ");
    scanf("%d",&n);
    int noOfWays = maze2(m,n);
    printf("%d",noOfWays);
    return 0;
}