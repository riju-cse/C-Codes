#include<stdio.h>
int main()
{
	int i,k,j,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	int space=n;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=space;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
			printf(" ");
		}
		printf("\n");
		space--;
	}
	return 0;
}
