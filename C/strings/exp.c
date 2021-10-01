#include<stdio.h>
int main(){

	char ch[20];
	printf("enter a string\n");
	fgets(ch, 40, stdin);
	printf("%s", ch);
	return 0;

}
