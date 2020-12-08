#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i,j,tab[10][10];
	srand(time(0));
	for (j=0;j<10;j++)
	{
		for(i=0;i<10;i++)
		{
			tab[i][j]=rand()%10;
			printf("%d ",tab[i] [j]);
		}
		printf("\n");
	}
	printf("\n\n");
	for (j=0;j<10;j++)
	{
	    for(i=0;i<10;i++)
		{
			if(i==j)
			{
				printf("%d ",tab[i] [j]);
			}
			
			}	
	}
	printf("\n");
	for(j=9;j>=0;j--)
	{
	 	for(i=9;i>=0;i--)
	 	{
	 		if(i==j)
	 		{
	 			printf("%d ",tab[i] [j]);
			 }
		 }
	}
	printf("\n");
	
	for (j=0;j<10;j++)
	{
		for(i=0;i<10;i++)
		{
			if(i+j==9)
			{
				printf("%d ",tab[i] [j]);			
				}
		}
	}
	printf("\n");
	
	for(j=9;j>=0;j--)
	{
		
		
		   for(i=9;i>=0;i--)
		   {
		   	if(i+j==9)
		   	{printf("%d ",tab[i] [j]);
			   }
			   }	
		
		
	}
	printf("\n");
	return 0;
	
}
