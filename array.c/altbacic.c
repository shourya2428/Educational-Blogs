//f(n) = n * f(n-1) -> Recurrence relation

 #include<stdio.h>
 void main(){
int a[4];// = {'!','@','#','$'};//special characters
for(int i = 0;i <= 3;i++){
    printf("Enter element number %d\n",i+1);
scanf("%d",&a[i]);
}
printf("%d",a[2]);
// printf("Enter the element : ");
// scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);

 }
