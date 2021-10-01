#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p = (int*) malloc(sizeof(int));
	*p = 10;
	free(p);
	printf("memory go boom\n");
	printf("%d",*p);
}
