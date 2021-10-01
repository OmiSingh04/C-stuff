#include<stdio.h>
int main(){
	int a[] = {0,0,0,0,0};
	int *p = a;
	for(int i = 0; i < 5; i++){
	printf("%d\n",p[i]);
	}
}
