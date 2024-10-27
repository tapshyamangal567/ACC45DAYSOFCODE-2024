#include<stdio.h>
int main()
{
	int a,b,c,d,maxtastiness;
	printf("enter tastiness of ingredient C: ");
	scanf("%d",&d);
	printf("enter tastiness of ingredient D: ");
	scanf("%d",&d);
	
	int T1 = a+c;
	int T2 = a+d;
	int T3 = b+c;
	int T4 = b+d;
	

	
	if(T2 > maxtastiness) maxtastiness = T2;
	if(T3 > maxtastiness) maxtastiness = T3;
	if(T4 > maxtastiness) maxtastiness = T4;
	
	printf("maximum possible tastiness of the dish: %d",maxtastiness);
	
	return 0;
	
}
