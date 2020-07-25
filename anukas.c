#include<stdio.h>
#include<math.h>
int main(){
int i=1,n,x;
float s=1;
printf("enter n");
scanf("%d",&n);
printf("enter x");
scanf("%d",&x);
while(i<=n){
    s=s+(pow(x,i)/i);
    i=i+1;
}
printf("s=%f",s);
return 0;
}
