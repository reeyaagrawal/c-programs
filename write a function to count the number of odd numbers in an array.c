// write a function to count the number of odd numbers in an array
#include<stdio.h>
void countOdd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 !=0)
        count++;
    }
    printf("number of odd number in an array are: %d",count);
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
    countOdd(arr,size);
    return 0;
}