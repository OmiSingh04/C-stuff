#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr = malloc(sizeof(int) * 3);
	*ptr = 1;
	*(ptr + 1) = 2;
	*(ptr + 2) = 3;
	for(int i = 0; i < 3; i++)
		printf("%d",*(ptr + i));
	return 0;
}
