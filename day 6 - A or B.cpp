#include<stdio.h>
int main()
{
	int X,Y;
	
	printf("enter the time to solve problem A (X minutes): ");
	scanf("%d",&X);
	
	printf("enter the time to solve problem B (Y minutes): ");
	scanf("%d",&Y);
	
	int total1=1500-6*X-4*Y;
	int total2=1500-6*Y-2*X;
	
	int maxpoints= (total1>total2)? total1 : total2;
	
	printf("maximum points chef can score: %d",maxpoints);
	return 0;
	
}
