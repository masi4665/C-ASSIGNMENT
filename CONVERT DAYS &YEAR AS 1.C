#include<stdio.h>
main()
{
	int days,year;
	
	
	printf("ENTER THE DAYS :");
	scanf("%d",&days);
	
	year=days/365;
	days=(365%year)%7;
	
	printf("\nYEARS :%d",year);
	printf("\nDAYS :%d",days);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
