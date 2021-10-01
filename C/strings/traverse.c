#include<stdio.h>
int string_length(char* a){
	int len = 0;
	int i = 0;
	for(int i = 0; 1; i++){//since strings are just character arrays, you can traverse in pointer style which is way more intellectual
		if(*(a+i) == '\0')
			break;
		else
			len++;
	}
	return len;
}
int main(){

	char ch[] = "QHAT THE HELL MAN";//after this initialize, its static now not gonna change
	ch[0] = 'W';

	printf("%s\n",ch );
	//you cannot change the complete array, but you can change a particular element.

	printf("%d", string_length(ch));

	return 0;
}