#include<stdio.h>
#include<string.h>

int main(){
	char string[8]=" Hello ";
	printf("Mang sau khi dao nguoc la: ");
	for(int i=7; i>=0; i--){
		printf("%c", string[i]);
	}
	return 0;
}
