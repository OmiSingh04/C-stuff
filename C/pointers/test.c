#include<stdio.h>
int main(){
	int x = 10;
	int* a =  &x;
	printf("%ld\n",sizeof(x));//4
	printf("%ld\n",sizeof(a));//8
	printf("%ld\n",sizeof(*a));//4
	printf("%ld\n",sizeof(&x));//8
	return 0;
}
