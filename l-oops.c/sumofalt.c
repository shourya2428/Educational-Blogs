  //1-2+3-4+5-6...
  #include<stdio.h>
  void main(){
    int p;
    printf("Enter p : ");
    scanf("%d",&p);
    int sum = 0;
    for(int i = 1;i <= p;i++){
if(i % 2 == 0)sum += i;
if(i % 2 != 0)sum -= i;
    }
    printf("Required sum is : %d\n",sum);

  }// if n is odd sum = (-n/2)+n,if n is even sum = -n/2.