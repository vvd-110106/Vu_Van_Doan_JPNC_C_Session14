#include<stdio.h>
#include<string.h>

int main(){
	char string[8]=" Hello ";
	printf("Mang sau khi them dau cach la: ");
	for(int i=0; i<8; i++){
		printf("%c ", string[i]);
	}
	return 0;
}
