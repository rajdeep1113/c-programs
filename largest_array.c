#include<stdio.h>

int largest(int arr[],int n){
    int max=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    printf("Max element is : %d",max);
}
int main(){

    int n;
    printf("Enter number n :");
    scanf("%d",&n);

    int arr[n];

    printf(" enter number for array %d:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    largest(arr,n);
    
return 0;
}