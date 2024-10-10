#include<stdio.h>
int main()

{
	int X,Y;
	
	printf("enter the number of problems submitted (X): ");
	scanf("%d",&X);
	
	printf("enter the number of problems approved (Y): ");
	scanf("%d",&Y);
	
	if(2*Y>=X)
	{
		printf("munchy is an expert");
	}
	else
	{
		printf("munchy is not an expert");
	}
	
	return 0;
}
