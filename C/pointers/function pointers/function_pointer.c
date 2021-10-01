#include<stdio.h>
int sum(int a, int b){
	return a+b;
}
int main(){
	int (*ptr) (int, int) = *sum;
	printf("%d", ptr(1,2));	
	return 0;
}
