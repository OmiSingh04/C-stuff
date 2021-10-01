#include<stdio.h>
#include<sys/socket.h>
int main(){

	char ch[] = "HELLO WORLD";
	char* ptr = ch;//array variables are basically pointers to the first element, and since the 
	//elements are sotred in contiguous memory locations, the next element is obtained easily by incrementing the pointer :)
	
	printf("%s", ptr);	

	return 0;
}
