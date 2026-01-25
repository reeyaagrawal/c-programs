// Write a function to print n terms of the fibonacci sequence.
#include<stdio.h>
void printFibonacci(int n){
    int a=0,b=1,next;
    for (int i = 1; i <= n; i++)
    {
       printf("%d ",a);
       next=a+b;
       a=b;
       b=next;
    }
    
}
int main(){
    int n;
    printf("enter number of terms: ");
    scanf("%d",&n);
    printFibonacci(n);

    return 0;
}