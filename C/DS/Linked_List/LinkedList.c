#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};

void print_list(const struct node* head){
	for(; head->next != NULL; head = head -> next){
		printf("%d", head->data);
	}
}
void append(struct node* head, int data){

	if(head->next == NULL){
		head->data = data;
		return;
	}

	struct node new_node;

	struct node* append_node = &new_node;
	append_node -> data = data;


	for(; head->next != NULL; head = head->next){	
	}

	head -> next = append_node;

}
int main(){
	struct node head;
	struct node* head_node = &head;
	append(head_node, 10);
	append(head_node, 20);
	print_list(head_node);
	return 0;
}
