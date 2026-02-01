// Write a program in C to print the elements of an array in reverse order.
#include<stdio.h>
int main(){
    int size;

    printf("enter size of an array:");
    scanf("%d",&size);
    int arr[size];

    printf("\n enter elements of an array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size/2;i++){
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    printf("elements in reversed order:");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}