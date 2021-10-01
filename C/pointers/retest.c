#include<stdio.h>
#include<stdlib.h>
//the point is the make free space storing data so it basically represents an array
//
int* allocate(int size){
	return (int*)malloc(sizeof(int) * size);
}
int print(const int *ptr, int size){
	for(int i = 0; i < size; i++){
		printf("%d ",*(ptr + i));
	}
}
int main(){
	int size = 5;
	int* ptr = allocate(size);
	for(int i = 1; i <= size; i++){
		*(ptr + i - 1) = i*2;
	}	
	print(ptr, size);

	return 0;
}
