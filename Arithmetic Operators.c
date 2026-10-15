#include<stdio.h>
int main()
{
	int num1,num2;
	int sum,sub,mul,div,mod;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);
	
	sum=num1+num2;
	sub=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	mod=num1%num2;
	
	printf("\naddition=%d",sum);
	printf("\nsubstraction=%d",sub);
	printf("\nmultiplication=%d",mul);
	printf("\ndivision=%d",div);
	printf("\modulus=%d",mod);
	
	return 0;
}