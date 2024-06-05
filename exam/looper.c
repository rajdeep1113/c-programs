#include<stdio.h>

int main(){

// ans-1

// char str='a';
// do{
//     printf("%c",str);
//     str+=4;
// }
// while(str<='z');


//ans-2
// int count=0;
// int num;
// printf("Enter  number %d :",num);
// scanf("%d",&num);

// while(num>0){

//     count++;
//     num=num/10;
// }
// printf("the count is %d",count);
    
// ans-3
int num;
int first,last,sum;

printf("Enter  number :",num);
scanf("%d",&num);
last=num%10;

while(num>=10){
    num/=10;
}
sum=num+last;
printf("sum of first and second is : %d",sum);




return 0;
}