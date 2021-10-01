#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
	int length;
	int* node;
};
int* allocate(int n);
int* increase(int n);
int main(){
	initial_size = 5;
	int* ptr = allocate(initial_size);
	ptr = increase(ptr,initial_size, 10);
	return 0;
}
int* allocate(int n){
	return (int*) malloc(sizeof(int) * n);
}
int* increase(int* ptr, int initial_size, int final_size){
	int *ret = (int*) malloc(sizeof(int) * final_size);
	for(int i = 0; i < initial_size; i++){
		*(ret + i) = *(ptr + i);
	}
	return ret;
}