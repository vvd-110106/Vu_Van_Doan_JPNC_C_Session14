#include<stdio.h>
#include<string.h>

int main(){
	int check=0;
	char string[]= " Hello ";
	char character;
	printf("Ban hay nhap vao 1 ki tu: ");
	scanf("%c", &character);
	for(int i=0; i< strlen(string); i++){
		if(string[i]==character){
			check++;
		}
	}
	printf("So lan phan tu do xuat hien la: %d", check);
	return 0;
}
