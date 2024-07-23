#include<stdio.h>

struct car {
  char name[100];
  int year;
  float price;  
};

void main(){

    int n;

    printf("Enter the size of Array : ");
    scanf("%d", &n);

    struct car c[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for car #%d:\n", i + 1);
        printf("Name: ");
        scanf("%s", c[i].name);  
        fflush(stdin);
        printf("Year: ");
        scanf("%d", &c[i].year);
        fflush(stdin);
        printf("Price: ");
        scanf("%f", &c[i].price);
        printf("----------------------------------------");
    }

    printf("\nDetails of all cars:\n");
    for (int i = 0; i < n; i++) {
        printf("\nCar #%d:\n", i + 1);
        printf("Name: %s\n", c[i].name);
        printf("Year: %d\n", c[i].year);
        printf("Price: %.2f\n", c[i].price);
        printf("----------------------------------------");
    }
}