#include<stdio.h>
int main()
{
	int i,n,arr[100];
	printf("Enter Array Element:");
	scanf("%d",&n);
	printf("Enter Array Values:");
	for(i=0;i<=n;i++)
	{
		if(i==n)
		{
			printf("You will Cross The Limit");
		}
		else
		{
			scanf("%d",&arr[i]);
		}
	}
	printf("\nArray Values:");
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
	return 0;
}
