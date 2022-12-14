#include<stdio.h>
main()
{
	float time,rate,principal,simpleintrest;
	
	printf("\nENTER VALUE OF PRINCIPAL :");
 	scanf("%f",&principal);
 	
 	printf("\nENTER VALUE OF TIME :");
 	scanf("%f",&time);
 	
	printf("\nENTER VALUE OF RATE : ");
	scanf("%f",&rate);
	
	simpleintrest=(principal*time*rate)/100;
	
	printf("SIMPLE INTREST:%f",simpleintrest);
}
