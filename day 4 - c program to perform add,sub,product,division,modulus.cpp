#include<stdio.h>
int main()

{
	
	int num1,num2;
	
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	
	int sum = num1+num2;
	int difference = num1-num2;
	int product = num1*num2;
	int division = num1/num2;
	int modulus = num1%num2;
	
	printf("sum: %d",sum);
	printf("difference: %d",difference);
	printf("product: %d",product);
	printf("division: %d",division);
	printf("modulus: %d",modulus);
	
	return 0;
}
