#include<stdio.h>
#include<string.h>
int main(){
	char* ch = "just";
	ch = "choice";//declaring strings in C with pointers makes them dynamic?
	scanf("%[\n]s",ch);
	printf("%s",ch);
	return 0;
}
