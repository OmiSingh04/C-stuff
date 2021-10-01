#include<stdio.h>
int main(){
	int x = 10;
	int *p = &x;
	int **q = &p;
	printf("%ld\n",sizeof(q));
	printf("%ld\n",sizeof(*q));
	printf("%ld\n",sizeof(**q));
}
