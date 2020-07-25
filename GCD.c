#include<stdio.h>
int gcd(int u,int v);
int main()
{
	int x,y;
	printf("Enter two positive number:");
	scanf("%d %d",&x,&y);
	printf("GCD=%d",gcd(x,y));
	return 0;
}
int gcd(int u,int v)
{
	int temp;
	/*while(n1!=n2)
	{
		if(n1>n2)
		n1-=n2;
		else
		n2-=n1;
	}
	return n1;*/
	while(v!=0)
	{
		temp=u%v;
		u=v;
		v=temp;
	}
	return u;
}
