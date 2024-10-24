#include<stdio.h>
int main()
{
	
	int N;
	printf("enter the number of terms (N)");
	scanf("%d",&N);
	
	int coefficient[N];
	
	printf("enter the coefficients (A0,A1,....,A(N-1)): ");
	for (int i = 0; i < N; i++)
	{
		scanf("%d",&coefficient[i]);
	}
	
	int degree = -1;
	
	for (int i = 0; i<N; i++)
	{
		if(coefficient[i] !=0) {
			degree = 1;
		}
	}
	
	printf("the degree of polunomial is = %d",degree);
	
	return 0;
}

