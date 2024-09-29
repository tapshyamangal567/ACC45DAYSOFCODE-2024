#include<stdio.h>
#include<math.h>

int main()

{
	int N;
	float X;
	
	printf("enter the value of friends: ");
	scanf("%d",&N);
	
	printf("enter the cost of one subscription ");
	scanf("%f",&X);
	
	int subscriptionsneeded = (N+5)/6;
	
	float totalcost =subscriptionsneeded * X;
	
	printf("minimum total cost: %.2f rupees\n",totalcost);
	return 0;
	
}
