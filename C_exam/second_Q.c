#include<stdio.h>

void main(){
    int n;

    printf("Enter a size of Array : ");
    scanf("%d",&n);

    int arr[n];
    
    printf("Enter array elements\n");
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int max = arr[0];

    for (int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Maximum Value is %d",max);
    
}