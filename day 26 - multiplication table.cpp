#include<stdio.h>
int main()
{
	int i ,num;
	
	printf("enter number to print table : ");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d",num,i,(num*i));
	}
	
	return 0;
}
