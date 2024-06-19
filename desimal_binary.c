#include<stdio.h>

int convert(int n){

    int binarynum[50];
    int i=0;

    while(n>0){
        binarynum[i]= n%2;
        n=n/2;
        i++;

    }
    for(int j=0;j<i;j++){
    printf("%d",binarynum[j]);
    }
 
}

int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);

    convert(n);

return 0;

}