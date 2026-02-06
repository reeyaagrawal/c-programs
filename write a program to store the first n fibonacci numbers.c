// write a program to store the first n fibonacci numbers
#include<stdio.h>
void fibonacci(int n){//n ->number of terms
    int fibo[n];
    fibo[1]=0;
    fibo[2]=1;
    for(int i=3;i<=n;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    printf("first %d fibonacci numbers are: ");
    for(int i=1;i<=n;i++){
        printf("%d ",fibo[i]);
    }
}
int main(){
    int n;
    printf("enter no of terms: ");
    scanf("%d",&n);
    // int arr[size];
    // printf("enter elements of an array: ");
    // for(int i=0;i<size;i++){
    //     scanf("%d",&arr[i]);
    // }
    fibonacci(n);
    return 0;
}