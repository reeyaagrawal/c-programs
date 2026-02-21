// write a program to print the largest number and its index in an array
#include<stdio.h>
void largest(int arr[],int n){
    int largest=arr[0];
    int index=-1;
    for(int i=0;i<n;i++){
        if(largest<arr[i]){
            largest=arr[i];
            index=i;
        }
    }
    printf("%d is the largest number in an array at index %d",largest,index);
    
}
int main(){
    int arr[]={1,2,32,4,5,6,7,8};
    largest(arr,8);
    return 0;
}