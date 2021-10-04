#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};


int get_length(struct node* head){



}



void insert(int data, int index, struct node* head){
	
	struct node* ptr = head;
	for(;ptr != NULL; ptr = ptr -> next){}//now, would i like using while loop here? no! this looks cooler.
	ptr = malloc(sizeof(struct node));
	ptr -> data = data;

}


void append(int data, struct node* head){
	for(; head != NULL; head  = head -> next){
		printf("%p\n", head);
	head = malloc(sizeof(struct node));
	head -> data = data;
}
}

void delete(int index, struct node* head){



}


short is_empty(struct node* head){

	

}

void print_linked_list(struct node* head){

	for(;head != NULL; head = head -> next){
		printf("%d->",head -> data);
	printf("NULL\n");	

}
}


int main(){
	struct node* head = malloc(sizeof(struct node));
	append(10, head);
	append(20, head);
	append(30, head);
	printf("\n%d\n", head->data);
	print_linked_list(head);
	return 0;
}
