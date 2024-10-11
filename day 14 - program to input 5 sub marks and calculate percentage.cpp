#include<stdio.h>
int main()

{
	float maths,science,english,hindi,computer,percentage;
	
	printf("enter maths marks: ");
	scanf("%f",&maths);
	
	printf("enter science marks: ");
	scanf("%f",&science);
	
	printf("enter english marks: ");
	scanf("%f",&english);
	
	printf("enter hindi marks: ");
	scanf("%f",&hindi);
	
	printf("enter computer marks: ");
	scanf("%f",&computer);
	
	percentage = (maths+science+english+hindi+computer)*100/500;
	
	printf("%f",percentage);
	
	
}
