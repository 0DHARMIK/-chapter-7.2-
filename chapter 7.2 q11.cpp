#include<stdio.h>

main()
{
	int i,j,k;
	
	for(i=1	;i<=5;i++)
	{
		for(k=4;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=k;j++)
		{
			printf("*");
	 }
	
		for(j=i;j>=1;j--)
		{
			
	       printf("*");
		}
		printf("\n");
    }
}