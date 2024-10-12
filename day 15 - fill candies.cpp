#include<stdio.h>

int max(int x,int y) {
	return ( x> y) ? x : y;
}
int main() 
{
	int a,b,c,d;
	
	printf("enter the tastiness of ingredient A: ");
	scanf("%d",&a);
	
	printf("enter the tastiness of ingredient B: ");
	scanf("%d",&b);
	
	printf("enter the tastiness of ingredient C: ");
	scanf("%d",&c);
	
	printf("enter the tastiness of ingredient D: ");
	scanf("%d",&d);
	
	int max_tastiness = max(a,b) + max(c,d);
	
	printf("the maximum possible tastiness of the dish is : %d\n",max_tastiness);
	
	return 0;
}
