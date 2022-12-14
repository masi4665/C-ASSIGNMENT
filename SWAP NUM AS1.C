#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the Value of a:");
	scanf("%d",&a);
	
	printf("\nEnter the value of b:");
	scanf("%d",&b);
	
	//swap numbers
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n-----After Swap-----\n");
	printf("\nNew value of a: %d",a);
	printf("\nNew value of b: %d",b);
}
