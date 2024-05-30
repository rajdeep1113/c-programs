#include<stdio.h>

int main(){

int marks;
char grade;
printf("Enter the Marks :");
scanf("%d",&marks);
if(marks>90&&marks<=100){
    grade='A';
    printf("your grade is %c",grade);
}
else if(marks>80&&marks<=90){
    grade='B';
    printf("your grade is %c",grade);
}
else if(marks>70&&marks<=80){
    grade='C';
    printf("your grade is %c",grade);
}
else if(marks>60&&marks<=70){
    grade='D';
    printf("your grade is %c",grade);
}
else if(marks>50&&marks<=60){
    grade='E';
    printf("your grade is %c",grade);
}
else if(marks>=40&&marks<=50){
    grade='F';
    printf("your grade is %c",grade);
}
else{
    printf("invalid marks");
}

switch(grade){
    case 'A':
    printf("\t Excellent Work! \n");
    break;
    case 'B':
    printf("\t well done\n");
    break;
    case 'C':
    printf("\t Good job\n");
    break;
    case 'D':
    printf("\t you are passed \n");
    break;
    case 'E':
    printf("\t you are passed \n");
    break;
    case 'F':
    printf("\t sorry,you are failed,\n");
    break;
}

if(grade>='A' && grade<='D'){
    printf("\t You are eligible for next level (^_^) ");
}
else{
    printf("\t  But,You are eligible  not for next level (^_^)");
}

return 0;

}
