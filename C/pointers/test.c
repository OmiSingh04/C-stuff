#include<stdio.h>
int main(){
	int a = 10;
	int* const ptr = &a;
	(*ptr)++;
	printf("%d",a);
	return 0;
}
