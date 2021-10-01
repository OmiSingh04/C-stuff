#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student{
	char name[20];
	int roll;
};
int main(){
	
	struct Student* omi;
	omi = (struct Student) malloc(sizeof(struct Student));
	omi.name = "Omi Singh";
	omi.roll = 12;
	printf("%s\n%d",omi -> name,omi.roll);
	omi++;//increments by the size of the Student
	omi.name = "Ani Singh";
	omi.roll = 1;
	printf("%s\n%d", omi -> name, omi.roll);
	return 0;	
}
