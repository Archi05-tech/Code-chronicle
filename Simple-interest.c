#include<stdio.h>
int main()
{
	float principal,rate,time,simpleinterest;
	printf("Enter principal amount:");
	scanf("%f",&principal);
	
	printf("Enter rate of interest:");
	scanf("%f",&rate);
	
	printf("Enter time(years):");
	scanf("%f",&time);
	
	simpleinterest=(principal*rate*time)/100;
	printf("simple interest=%.2f",simpleinterest);
	
	return 0;
}