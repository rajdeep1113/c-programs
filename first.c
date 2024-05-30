#include<stdio.h>

int main(){
int a,b,c;
    printf("enter first number :\n");
    scanf("%d",&a);
    printf("enter second number :\n");
    scanf("%d",&b);
    printf("enter third  number :\n");
    scanf("%d",&c);

    printf("add is %d \n",a+b);
    printf("sub is %d \n",a-b);
    printf("multi is %d \n",a*b);
    printf("div is %d \n",a/b);
    
    printf("The evalution is %d \n",a+b*c-b/c);


    return 0;

}