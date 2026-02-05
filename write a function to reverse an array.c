// write a function to reverse an array
#include<stdio.h>
void reverseArray(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("Reversed array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int size;
    printf("enter no of elements in an array: ");
    scanf("%d",&size);
    int arr[size];
    printf("enter elements of an array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    reverseArray(arr,size);
    return 0;
}