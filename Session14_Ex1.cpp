#include<stdio.h>
#include<string.h>

int main(){
	char c[1000];
	printf("Nhap xau ki tu: ");
	fgets(c,1000,stdin);
	printf("Mang ban vua nhap la: ");
	fputs(c,stdout);
	printf("Do dai cua mang la: %d", strlen(c) );
	
}
