#include <stdio.h>
#include<string.h> 
#include<ctype.h> 

int main() {
    char string[100];
    int i = 0;
    printf("Ban hay nhap chuoi ki tu: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
        i++;
    }

    printf("Chuoi sau khi chuyen doi: %s", string);

    return 0;
}
