// writa a program to insert an element at the end of an array
#include<stdio.h>
void insertAtEnd(int arr[],int n,int  val){
    // int  length=n;
    arr[n]=val;
    // length++;
    n++;
    for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
    }
    printf("\nLength of an array after insertion: %d",n);

};
int main(){
    int arr[]={1,2,2,4,5,6,7,8};
    insertAtEnd(arr,8,8);
    return 0;
}