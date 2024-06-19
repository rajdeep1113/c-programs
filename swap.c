#include<stdio.h>

int swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf(" after swap a=%d and b=%d\n",a,b);
    
}
int main(){

int a,b;
    
    printf("enter first number :");
    scanf("%d",&a);
    printf("enter second number :");
    scanf("%d",&b);

    swap(a,b);
    
return 0;
}