#include<stdio.h>
int main(){
  int n,i,count=0;
pf("enter a number");
sf("%d",&n);
for(i=1;i<=n;i++){
if(n%i=0){
count=count+1;
}
}
if(count==2){
pf("%d is a prime number");
}else{
pf("%d is not a prime number");
}
}
