#include<stdio.h>
int main(){

	//if the string is declared as a pointer, the array would then be dynamic

	char* ptr = "";

	//scanf("%s", ptr);//reads until white space
	scanf("%[^\n]s", ptr);//regex to read until new line (\n)

	printf("%s", *ptr);
	return 0;
}