#include <stdio.h>

void reverseStr(char str[] ,int length){
    char rev[100];
    for (int i = 0; i < length; i++) {
        rev[i] = str[length - 1 - i];
    }
    rev[length] = '\0';  

    printf("Reverse String is %s",rev);
}

void main() {
    char str[100]; 

    printf("Enter a String: ");
    scanf("%s", str); 

    int length = 0;
    while (str[length] != '\0') {
        length++; 
    }

    reverseStr(str , length);
}