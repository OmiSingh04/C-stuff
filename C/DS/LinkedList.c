#include<stdio.h>
#include<stdlib.h>

struct Node{
	int a;
	struct Node *next;
};

int main(){
	
	struct Node* head = (struct Node*) malloc(sizeof(struct Node));	
	struct Node* second = (struct Node*) malloc(sizeof(struct Node));	
	struct Node* third = (struct Node*) malloc(sizeof(struct Node));


	head -> a = 1;
	second -> a = 2;
	third -> a = 3;

	head -> next = second;
	second -> next = third;

	printf("%d\n",head -> a);
	head = head -> next;
	printf("%d\n",head -> a);
	head = head -> next;
	printf("%d\n",head -> a);
	//boom thats linked list
	return 0;
}
