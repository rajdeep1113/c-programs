#include<stdio.h>

void main(){
    int n;

    printf("Enter a size of Array : ");
    scanf("%d",&n);

    int arr[n];
    int *ptr;
    ptr = arr;
    printf("Enter array elements\n");
    for (int i = 0; i < n; i++){
        scanf("%d",&*(ptr+i));
    }

    printf("Array elements are\n");
    for(int i = 0; i < n ; i++){
        printf("%d ",*(ptr+i));
    }
}