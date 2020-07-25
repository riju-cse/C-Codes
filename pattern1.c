#include<stdio.h>
int main()
{
	int n,m,i,z;
	int x=65;
	printf("enter the value of n");
	scanf("%d ",&n);
	int maxnum=n-1,space=2;
	for(i=1;i<=n;i++)
	{
		int count=n;
		while(count>0)
		{
			printf("%C",x);
			count--;
			x++;
			if(count==0)
			{
				if(i>1)
				{
					for(z=1;z<=space;z++)
					{
						printf(" ");
					}
					space+=2;
				}
				while(count!=n)
				{
					printf("%C",x);
					count++;
					x--;
				}
			}
		}
	}
	return 0;
}
