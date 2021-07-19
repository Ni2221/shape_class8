#include <stdio.h>
int main (){
	int n;
	printf("\n enetr the no of element in an array :");
	scanf("%d",&n);
	int first ,last,mid,search;
	printf("\n enter the integer : \n",n);
	
	int arr[n];
	
	for (int i=0;i<n;i++)
		scanf("%d",&arr[i]);
			printf("\n enter the value to find:\n");
		scanf("%d",&search);
	
		first =0;
		last =n-1;
		mid=(first+last)/2;
		
		while (first<=last){
			if (arr[mid ]<search){
				first=mid+1;
			}
		
		else if( arr[mid]==search){
			printf("%d is present at index %d",search,mid+1	);
break;
}
	
	else
	last=mid-1;
	mid=(first+last)/2;
		
	}
	if(first>last){
		printf("not found %d is not present",search );
		return 0;
	}
}

