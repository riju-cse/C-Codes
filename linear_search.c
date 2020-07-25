#include<stdio.h>
int main()
{
	int i,arr[100],n,x;/*i use for loop counter,arr[100] is array variable,n is size of array,x is use for store the value given by user which user wants to 
	search*/
	printf("Enter the value of array size:");
	scanf("%d",&n);
	printf("\nEnter array values:");
	for(i=0;i<n;i++)/*use for loop to store the array values from user*/
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the value you can search:");/*in here user will give the value which they want to search*/
	scanf("%d",&x);
	for(i=0;i<n;i++)/*useing for loop for checking all the array values with the searched values*/
	{
		if(arr[i]==x)/*condition for checking the all values with the searched values if this condition will satisfied then print the location and use break
		for out from the loop*/
		{
			printf("\n%d present at location %d",x,i+1);
			break;
		}
	}
	if(i==n)/* we know array index starts from 0 and end in n-1 so if i is equel to n then the array index dosen't exsist so we print it to the user*/
	{
		printf("\n%d isn't present in the array",x);
	}
	return 0;
	
	
}
