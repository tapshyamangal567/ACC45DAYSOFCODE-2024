#include<stdio.h>
int main()
{
	int N,X;
	
	printf("enter the total number of cards (N): ");
	scanf("%d",&N);
	
	printf("enter the number of face-up cards (X): ");
	scanf("%d",&X);
	
	int face_down = N-X;
	
	int min_operations=(X<face_down)? X:face_down;
	
	printf("minimum number of operations required: %d ",min_operations);
	
	return 0;
}
