#include<stdio.h>

main()
{
	int i,n=0;
	printf("enter the no.=");
	scanf("%d",&i);
	while(i!=0)
	{
		i=i/10;
		n++;
    }
    
    printf(" count number of digits in a number=%d ",n);

	
	
	
	
}
