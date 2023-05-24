#include<stdio.h>

int main()
{
	int i=0,c,d,n;
	printf("enter the no.=");
	scanf("%d",&n);
	d=n;
	while(n!=0)
	{
		c=n%10;
		i=i*10+c;
		n/=10;
		
	}
	if(d==i)
	{
		printf("no.is pelidrome",d);
	}
	else
	{
		printf("no.is not pelidrome",d);
	}
}
