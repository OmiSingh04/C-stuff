#include<stdio.h>
struct n{
	int a;
	int b;
	int c;
	int d;
}head;
int main(){
	struct n* ptr = &head;
	printf("%ld",sizeof(ptr));
}
