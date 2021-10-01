#include<stdio.h>
#include<stdlib.h>
int* allocate(int n){
	int* ptr = (int*) malloc(sizeof(int) * n);
	return ptr;
}
void print(int* const ptr, int n){
	printf("[");
	for(int i = 0; i  < n; i++){
		if(i + 1 == n)
			printf("%d",*(ptr+i));
		else
			printf("%d, ",*(ptr+i));
	}
	printf("]");
}
int main(){
	int n = 3;
	int* ptr = allocate(n);
	for(int i = 0; i < n; i++){
		*(ptr + i) = (i+1) * 2;
	}
	print(ptr,n);
	free(ptr);
	return 0;
}
