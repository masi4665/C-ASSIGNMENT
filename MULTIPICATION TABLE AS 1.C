#include<stdio.h>
main()
{
	int num,i;
	printf("\nENTER NUMER :");
	scanf("\n%d",&num);
	
	printf("\n\nTable of: %d\n",num);
	

	for(i=1;i<=10;i++)
	{
		printf("%d X %d = %d\n",num,i,num*i);
	}
}
