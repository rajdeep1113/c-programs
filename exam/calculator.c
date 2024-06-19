#include<stdio.h>

void addition(){
    int num1,num2;
    printf("enter num 1 :");
    scanf("%d",&num1);
    printf("enter num 2 :");
    scanf("%d",&num2);
    printf("The sum of %d and %d is :%d",num1,num2,num1+num2);


}

void subtraction(){
    int num1,num2;
    printf("enter num 1 :");
    scanf("%d",&num1);
    printf("enter num 2 :");
    scanf("%d",&num2);
    printf("The sum of %d and %d is :%d",num1,num2,num1-num2);


}

void multiple(){
    int num1,num2;
    printf("enter num 1 :");
    scanf("%d",&num1);
    printf("enter num 2 :");
    scanf("%d",&num2);
    printf("The sum of %d and %d is :%d",num1,num2,num1*num2);


}

void division(){
    int num1,num2;
    printf("enter num 1 :");
    scanf("%d",&num1);
    printf("enter num 2 :");
    scanf("%d",&num2);
    printf("The sum of %d and %d is :%d",num1,num2,num1/num2);


}

void modulow(){
    int num1,num2;
    printf("enter num 1 :");
    scanf("%d",&num1);
    printf("enter num 2 :");
    scanf("%d",&num2);
    printf("The sum of %d and %d is :%d",num1,num2,num1%num2);


}

int main(){
    int choice;
    do{
        printf("\n 1.addition ");
        printf("\n 2.subtraction ");
        printf("\n 3.multiple ");
        printf("\n 4.division ");
        printf("\n 5.modulow ");
        printf("\n 6.Exit ");

        printf("Enter your choice : \n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            addition();
            break;
            case 2:
            subtraction();
            break;
            case 3:
            multiple();
            break;
            case 4:
            division();
            break;
            case 5:
            modulow();
            break;
            case 6:
            printf("Exiting program \n");
            break;
            default:
            printf("invalid choice");

        }

    }
    while(choice<6);

    return 0;

}