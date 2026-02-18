// in an array of numbers find how many times does a number 'x' occurs
#include<stdio.h>
int occurence(int arr[],int n,int target){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[]={1,2,3,6,5,6,7,6,9};
    printf("6 comes %d times",occurence(arr,9,6));
    return 0;
}