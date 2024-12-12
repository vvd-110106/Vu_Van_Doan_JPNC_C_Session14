#include <stdio.h>
#include<string.h>
#include <ctype.h> 

int main() {
    char input_str[100];
    printf("Ban hay nhap chuoi ky tu: ");
    fgets(input_str, sizeof(input_str), stdin); 
    int letterCounts = 0;  
    int digitsCount = 0;   
    int specialCount = 0;  

    for (int i = 0; input_str[i] != '\0'; i++) {
        char check = input_str[i];
        if (isalpha(check)) { 
            letterCounts++;
        } else if (isdigit(check)) { 
            digitsCount++;
        } else if (!isspace(check)) { 
            specialCount++;
        }
    }
    
    printf("So ky tu la chu cai: %d\n", letterCounts);
    printf("So ky tu la chu so: %d\n", digitsCount);
    printf("So ky tu dac biet: %d\n", specialCount);

    return 0;
}
