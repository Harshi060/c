#include<stdio.h>
int main(){
  printf("enter a number");
scanf("%d",&num);
for(i=1;i<num;i++)
{
if(num%i==0)
{
sum=sum+i;
}
}
if(sum==num){
printf("%d is a perfect number");
}
else{
printf("%d is not a perfect number");
}
}
  
