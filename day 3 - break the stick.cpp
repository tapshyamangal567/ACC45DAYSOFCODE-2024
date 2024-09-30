#include<stdio.h>
int main()
{
	int N,X;
	
	printf("enter the length of the stick (N): ");
	scanf("%d",&N);
	
	printf("enter the desired length (X): ");
	scanf("%d",&X);
	
	if (X<=N && (N % 2) == (X % 2)) {
		
		printf("yes,chef can obtain a stick of length %d.\n",X);
	} else {
		printf("No,chef cannot obtain a stick of length %d.\n",X);
	}
	return 0;
	
}
