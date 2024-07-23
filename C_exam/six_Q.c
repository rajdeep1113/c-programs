#include <stdio.h>

void main(){

    FILE *p;
    char str[50];

    for (int i = 1; i <=4; i++){
        printf("%d Student Name: " ,i);
        scanf("%s", str);

        p = fopen("raj.txt", "a");

        fprintf(p, "%s\n", str);
        fclose(p);

    }
}