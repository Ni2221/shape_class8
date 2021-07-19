#include<stdio.h>
struct node {
	int data;
	struct node *link;};
	struct node *head, *ptr;   
ptr = (struct node *)malloc(sizeof(struct node *));  

int main(){
	struct node *head =malloc(sizeof(struct node));
	head->data=46;
	head->link=NULL;
	
		struct node *current = malloc(sizeof(struct node));
	current->data=89;
	current->link=NULL;
		head->link= current;
		
			struct node *current2 = malloc(sizeof(struct node));
	current2->data=9;
	current2->link=NULL;
		current->link= current2;
		return 0;
	
	
}
