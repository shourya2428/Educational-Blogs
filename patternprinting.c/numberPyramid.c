 #include<stdio.h>
void main(){
    int n,i;
    printf("Enter number of lines : ");
    scanf("%d",&n);
   int nsp = n-i;
    for( i=1;i<=n;i++){
        int a=i-1;
        for(int j=1;j <= nsp;j++){ 
    
            printf(" ");
        }
        nsp--;
        for(int k=1;k <= i;k++){
            printf("%d",k); 
        }
        for(int q = 1;q<=i-1;q++){
            printf("%d",a);
            a--;
        }
        printf("\n"); 
    }

}