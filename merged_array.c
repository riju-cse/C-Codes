#include<stdio.h>
int main()
{
	int i,j=0,arr[100],a[100],n,m,temp;
	printf("Enter the first array element:");
	scanf("%d",&n);
	printf("Enter first array value:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the 2nd array element:");
	scanf("%d",&m);
	printf("enter 2nd array value:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n;i<n+m;i++)
	{
		arr[i]=a[j];
		j++;
	}
	printf("Merged array:");
	for(i=0;i<n+m;i++)
	{
		printf(" %d ",arr[i]);
	}
	j=0;
	for(i=0;i<n+m;i++)
	{
		for(j=i+1;j<=n+m;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	printf("\nAfter array shorting:");
	for(i=0;i<n+m;i++)
	{
		printf(" %d ",arr[i]);
	}
	
	return 0;
}
