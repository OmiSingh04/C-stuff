#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct Student{
	
	char name[20];
	int marks;
};
int main(){
	struct Student *ptr;
	ptr = malloc(2* sizeof(struct Student));
	strcpy(ptr -> name,"Omi Singh");
	ptr -> marks = 100;
	printf("%s\t%d\n", ptr -> name, ptr -> marks);
	ptr++;
	strcpy(ptr -> name, "Ani Singh");
	ptr -> marks = 99;
	printf("%s\t%d", ptr -> name, ptr -> marks);
	return 0;
}
