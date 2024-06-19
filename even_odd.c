#include<stdio.h>

int even_odd(int num){
    if(num%2==0){
        printf("number is even");
    }
    else{
        printf("number is odd");
    }    
}
int main(){

int num;
    
    printf("enter first number :");
    scanf("%d",&num);
    even_odd(num);
    
return 0;
}