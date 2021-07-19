#include<stdio.h>

// c program to traverse an array
void traverse(int a[],int n)
{
	int i;
	printf("Array:");
	for(i=0;i<n;i++);
	{
		printf("%d",a[i]);
		
	}
	printf("\n");
}
int main()
{
	int a[]={2,-1,5,6,0,-3};
	int n= sizeof(a) / sizeof(a[0]);
	traverse(a,n);
	return 0;
}
