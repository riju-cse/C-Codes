#include<stdio.h>
int main()
{
	int k,i,j,n,arr[100];
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element:");
		scanf("%d",&arr[i]);
	}
	printf("\nthe array before sorting :");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	for(i=1;i<n;i++)
	{
		k=arr[i];
		j=i-1;
		while(j>=0&&arr[j]<k)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=k;
	}
	printf("\nthe array after sorting :");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0;
}
