#include<stdio.h>
#include<stdlib.h>

int min_steps(int A,int B,int K) 
{
	int distance = abs(B-A);
	
	if (K==0) {
		return (A == B) ? 0 : -1;
	}
	
	return (distance + K-1) /K;
}

int main() {
	int A,B,K;
	
	printf(" enter the cordinates of chef (A): ");
	scanf("%d",&A);
	printf(" enter the cordinates of chefina (B): ");
	scanf("%d",&B);
	printf(" enter the maximum step size (K): ");
	scanf("%d",&K);
	
	int result = min_steps(A,B,K);
	if (result == -1) {
		printf("chef cannot reach chefina.\n");
	} else {
		printf("minimum steps required: %d\n",result);
	}
	
	return 0;
}
