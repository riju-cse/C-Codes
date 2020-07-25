#include<stdio.h>
int main()
{
	int arr[100],n,i,j,large,lowest;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("enter the array value:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array values are:");
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
	large=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>large)
			{
				large=arr[i];
			}
			
		}
	printf("\n Large Element=%d",large);
	lowest=arr[0];
		for(i=1;i<n;i++)
	{
		if(arr[i]<lowest)
			{
				lowest=arr[i];
			}
    }
	printf("\n Smallest Element=%d",lowest);

	return 0;
	
		
}
