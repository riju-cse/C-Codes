#include<stdio.h>
int factorial(int x);
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n!=0){
	printf("\nFactorial!=%d",factorial(n));
	}
	else{
		printf("\nFactorial!=1");
	}
	
	return 0;
}
int factorial(int x)
{
	int f=1,i;
	for(i=1;i<=x;i++){
	f=f*i;
	}
	return f;
}
