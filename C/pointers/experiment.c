//the goal is to make 2 functions
//one to accept an array of integers and return address
//ont to multiple the elements by 2
#include<stdio.h>
#include<stdlib.h>
int* const input(int n);
void multiply(int* const ptr, int n);
void print(int* const a, int n);
int main(){
	int n;
	printf("Enter the number of elements you wanna store\n");
	scanf("%d",&n);
	printf("enter the numbers\n");
	int* const a = input(n);
	multiply(a,n);
	printf("multiplied...\n");
	print(a, n);
}
int* const input(int n){

	int *ptr = (int*)malloc(n*4);
	for(int i = 0; i < n; i++){
		printf("enter: ");
		scanf("%d",ptr+i);
	}
	return ptr;

}
void multiply(int* const a, int n){
	for(int i = 0; i < n; i++){
		*(a+i) = *(a+i) * 2;
	}
}
void print(int* const a, int n){
	printf("[");
	for(int i = 0; i < n; i++){
		printf("%d",*(a+i));
		if(i < n-1)
			printf(", ");
	}
	printf("]");
}
