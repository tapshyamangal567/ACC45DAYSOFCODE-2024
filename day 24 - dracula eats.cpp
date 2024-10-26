#include<stdio.h>
int main()
{
	
	int N;
	printf("enter the number of spooky days left until halloween (N): ");
	scanf("%d",&N);
	
	int tuesdays = 0;
	for (int i = 0; i<N ; i++)
	{
		if ((i+1) % 7 == 0)
		{
			tuesdays++;
		}
	}
	
	printf("dracula can enjoy his favourite menu on tuesdays %d times in the next %d days ",tuesdays,N);
	
	return 0;
}
