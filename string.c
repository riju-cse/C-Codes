#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j=0,l=0;
	char str1[100],str[100];
	printf("Enter a string:");
	gets(str1);
	l=strlen(str1);
	for(i=l;i>=0;i--)
	{
		str[j]=str1[i];
		j++;
	}
	printf("the reverse string:%c",str);
	return 0;
}
