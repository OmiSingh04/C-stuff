#include<stdio.h>
struct structure{
	char a;
	char b;
	char c;
};
int main(){
	printf("%d bytes",sizeof(struct structure));
	return 0;
}
