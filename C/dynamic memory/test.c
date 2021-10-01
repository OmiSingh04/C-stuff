#include<stdio.h>
#include<stdlib.h>
int* allocate(int n){
	return (int*) malloc(sizeof(int) * n);
}
int main(){
	int *a;
	a = allocate(3);
	*a = 12;
	*(a+1) = 13;
	*(a+2) = 14;//this way, you can save memory by a lot
	//like im totally using heaps now lol
	//if you make an app with C or C++ or some sytems programming language, and try the same with like, java or python,
	//you can notice how much more memory java is gonna take to run the same thang!!!!
	printf("%d %d %d", *a, *(a+1), *(a+2));
	free(a);
	return 0;
}
