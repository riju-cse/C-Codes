#include<stdio.h>
int main()
{
	int arr[100];i,n,x,f,l,mid; /*arr[] is array variable,i is loop counter,x is a variable where search variable is stored,f and l is first and last 
	index of array,mid is the middle variable of first and last.*/
	printf("Enter the size of array:");/*wanted to know the size of array from user*/
	scanf("%d",&n);
	printf("Enter the array value in asending order:");/*told user to give array values in ascending order*/
	for(i=0;i<n;i++);
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the value you want to search:");/*wanted to know the value which they wanted to search*/
	scanf("%d",&x);
	f=0;//inisialize first index of array as f//
	l=n-1;//inisialize last index of array as l//
	mid=(f+l)/2;//middle value of f and l//
	while(f<=l)/*use thisloop for finding the value of x. f and l will change accroding to following order*/
	{
		if(arr[mid]<x)/*if the value of x is greater then mid then the value of f change.if the condition satisfied then the searching will happen in
		the upper part and if isn't the searching will happen in the lower part*/
		{
			f=mid+1;
		}
		else if(arr[mid]==x)/*if mid value is equel to the searched value then we print the location of mid,and break the loop*/
		{
			printf("value %d is in the %d position of array",x,mid+1);
			break;
		}
		else/*if the value of x is less then mid value then we modity l*/
		{
			l=mid-1;
		}
		mid=(f+l)/2;/*after those conditions again we change the mid value considering new f of l. this process is going on until the mid value is 
		equal to searched value*/
	}
	if(f>l)/*if f is greater then l then the value dosen't exsist in the array*/
	{
		printf("The value %d is not in the array",x);
	}
	return 0;
}
