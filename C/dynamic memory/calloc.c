#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void print(int* const ptr, int n){
	printf("[");
	for(int i = 0; i  < n; i++){
		if(i + 1 == n)
			printf("%d",*(ptr+i));
		else
			printf("%d, ",*(ptr+i));
	}
	printf("]\n");
}

int main(){
	int n = 3;
	int *ptr = (int*) calloc(n,sizeof(int));
	for(int i = 0; i < n; i++)
		*(ptr + i) = 100;

	print(ptr, n);
	free(ptr);
	return 0;
}