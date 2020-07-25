#include<stdio.h>
int main()
{
	int arr[100],n,i,j,temp;/*arr[] is the array variable,n is size of array,i,j are the loop counter,temp is use as a third variable to swap two
	numbers*/ 
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
	for(i=0;i<n;i++)//i starts from index o and it incress upto n-1
	{
		for(j=i+1;j<=n;j++)//j starts from i+1 and increes upto n-1
		{
			if(arr[i]>arr[j])/*value of index 0 will be checking with 1 to n-1 and if this condition satisfy the samlle value is swap to index 0
			first time at the first index we will get the smallest value.then the value of i will incress to 1 and again value of index 1 will checked
			with rest index value and 2nd smallest value will stored in 2nd index. in that way we get the shorted array*/
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	printf("\nAfter array shorting:");/* printing the value of shorted array*/
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
	
	return 0;
	
		
}
