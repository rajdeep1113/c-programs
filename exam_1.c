#include<stdio.h>

int main(){

int num;
printf("Enter the number :");
scanf("%d",&num);

if(num%3==0||num%5==0){
    printf("The number is multiple of 3 or 5");

}
else{
    printf("not a multiple of 3 or 5");
}

return 0;

}
