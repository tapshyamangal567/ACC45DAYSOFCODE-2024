#include<stdio.h>
int main()
{
	int N;
	int pages_per_kg = 1000;
	int pages_per_notebook = 100;
	
	printf("enter the amount of pulp in kg = ");
	scanf("%d",&N);
	
	int total_pages = N*pages_per_kg;
	
	int notebooks = total_pages / pages_per_notebook;
	
	printf("number of notebooks that can be made : %d",notebooks);
	
	
}
