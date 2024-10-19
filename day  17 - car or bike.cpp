#include<stdio.h>
int main()

{
	int X,Y;
	
	printf("enter the time taken by BIKE (in minutes): ");
	scanf("%d",&X);
	printf("enter the time taken by CAR (in minutes): ");
	scanf("%d",&Y);
	
	if(X < Y) {
		printf("travelling by BIKE is slower.\n");
	}
	
	else if(X > Y)  {
		printf("travelling by CAR is slower.\n");
	}
	
	else  {
		printf("both options take the same time.\n");
	}
		
}
		
	
