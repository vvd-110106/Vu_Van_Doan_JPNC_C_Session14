#include<stdio.h>
#include<string.h>

int main(){
    char string[100];
    int count = 0;

    printf("Nhap chuoi ki tu: ");
    fgets(string, 100, stdin);
    
    for(int i = 0; i < strlen(string); i++){
        if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')) {
            count++;
        }
    }

    printf("So luong ky tu la chu cai trong chuoi la: %d\n", count);

    return 0;
}

