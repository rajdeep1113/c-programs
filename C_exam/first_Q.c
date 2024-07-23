#include<stdio.h>

void main(){
    char str;
    printf("Enter any character : "); 
    scanf("%c",&str);

    switch (str){
    case 'A':
        printf("It is an Vowel");
    break;
    case 'a':
        printf("It is an Vowel");
    break;
    case 'E':
        printf("It is an Vowel");
    break;
    case 'e':
        printf("It is an Vowel");
    break;
    case 'I':
        printf("It is an Vowel");
    break;
    case 'i':
        printf("It is an Vowel");
    break;
    case 'O':
        printf("It is an Vowel");
    break;
    case 'o':
        printf("It is an Vowel");
    break;
    case 'U':
        printf("It is an Vowel");
    break;
    case 'u':
        printf("It is an Vowel");
    break;
    
    default:
        printf("It is a Consonant");
    }
}