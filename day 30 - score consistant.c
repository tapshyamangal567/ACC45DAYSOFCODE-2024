#include<stdio.h>
int main()
{
	int A,B,C,D;
	
	printf("enter the current score (A B): ");
	scanf("%d %d",&A ,&B);
	printf("enter the target score (C D): ");
	scanf("%d %d" ,&C,&D ); 
	
	if(C >- A && D>-B) {
		printf("yes,the score can become %d:%d.\n",C,D);
	} else {
		printf("No,the score can become %d:%d.\n",C,D);
	}
	
	return 0;
}
