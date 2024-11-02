#include<stdio.h>
int main()
{
	
	int N;
	printf("enter the number of players to choose from : ");
	scanf("%d",&N);
	
	int choices = N * (N - 1);
	
	printf("number of different choices chef has: %d",choices);
	
	return 0;
}
