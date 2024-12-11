#include<stdio.h>
#include<string.h>

int main(){
    char string[100];
    int count = 0;

    printf("Nhap chuoi ki tu: ");
    fgets(string, sizeof(string), stdin);

    for(int i = 0; i < strlen(string); i++) {
        if((i == 0 && string[i] != ' ') || (string[i] != ' ' && string[i-1] == ' ')){
            count++;
        }
    }

    printf("So tu trong chuoi la: %d\n", count);

    return 0;
}

