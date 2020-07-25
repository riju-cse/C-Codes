#include<stdio.h>
int factorial(int x);
int main()
{
	int n,j;
	float s;
	printf("Enter the last number of the odd series:");
	scanf("%d",&n);
	if(n%2!=0){
	for(j=1;j<=n;j+=2){
		s=s+factorial(j);
	}
	printf("The Sum of odd series=%f",s);
	}
	else{
		printf("You Enter Even Number!");
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
