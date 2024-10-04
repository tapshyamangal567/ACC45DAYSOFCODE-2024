#include<stdio.h>
int main()
{
	
	float base,height,area;
	
	printf("enter base of rectangle: ");
	scanf("%f",&base);
	
	printf("enter height of triangle: ");
	scanf("%f",&height);
	
	area = (base * height)/2;
	printf("%f", area);
	
	return 0;
}
