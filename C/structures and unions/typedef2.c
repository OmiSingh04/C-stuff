#include<stdio.h>
int main(){
	typedef int* pointer;
	pointer p1, p2;
	int a1 = 23, a2 = 12;
	p1 = &a1;
	p2 = &a2;
	printf("%x\n%x",p1, p2);
	return 0;
}
