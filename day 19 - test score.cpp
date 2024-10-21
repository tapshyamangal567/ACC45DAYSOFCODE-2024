#include<stdio.h>
int main()

{
	
	int N,X,Y;
	printf("enter the number of problems (N)");
	scanf("%d",&N);
	
	printf("enter the marks for each problem (X)");
	scanf("%d",&X);
	
	printf("enter the target marks (Y)");
	scanf("%d",&Y);
	
	int maxmarks = N*X;
	if(Y>=0 && Y<=maxmarks && Y%X==0)
	{
		printf("yes,chef can achieve exactly %d marks.\n",Y);
	}
	
	else
	{
		printf("No,chef cannot achieve exactly %d marks.\n",Y);
	}
	
	return 0;
}
