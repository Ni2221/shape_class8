#include<stdio.h>
int main(){
	int r,c,a[100][100],b[100][100],i,j;
	int sum=0;
	int mult=1;
	printf("Enter the number of rows(between 1 to 100):");
	scanf("%d",&r);

	printf("Enter the number of column(between 1 to 100):");
		scanf("%d",&c);
	
	printf("\n Enter the element of 2D array\n");
	for (i=0;i<r;++i)
	for(j=0;j<c;++j)
	{
		printf("Enter the  element a%d%d:",i+1,j+1);
		scanf("%d",&a[i][j]);
		
	}
	// adding two matrix
	for (i=0;i<r;++i)
	for(j=0;j<c;++j)
	{
		if(a[i][j]%2==0)
		{
			sum=sum+a[i][j];
		}
		else{
			mult=mult*a[i][j];
		}
	}
	printf("\n sSum:%d \n",sum);
	printf("\n Multiplication: %d \n", mult);
	
}


