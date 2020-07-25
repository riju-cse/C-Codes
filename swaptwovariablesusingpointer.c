#include<stdio.h>
int swap(int *x,int *y);
int main()
{
	int x,y;
	int *ptr1,*ptr2;
	printf("enter two numbers:");
	scanf("%d %d",&x,&y);
	printf("before swaping x=%d y=%d",x,y);
	ptr1=&x;
	ptr2=&y;
	swap(ptr1,ptr2);
	printf("\nafter swaping the value x=%d y=%d",*ptr1,*ptr2);
	return 0;
}
int swap(int *x,int *y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
	return (*x,*y);
}
