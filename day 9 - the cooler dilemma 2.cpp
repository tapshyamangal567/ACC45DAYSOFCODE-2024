#include<stdio.h>
int main()
{
	int X,Y;
	
	printf("enter the rental cost per month (X): ");
	scanf("%d",&X);
	
	printf("enter the purchase cost (Y): ");
	scanf("%d",&Y);
	
	if (X<=0) {
		printf("rental cost must be greater than zero./n");
		return 1;
	}
	if (Y<=0) {
		printf("purchase cost must be greater than zero./n");
		return 1;
	}
	int M = (Y/X) - 1;
	
	if (M<0) {
		M=0;
	}
	printf("the maximum number of months for renting is: %d ",M);
	
	return 0;
}
