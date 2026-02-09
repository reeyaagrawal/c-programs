// write a function to find sum of digits of a number
#include<stdio.h>
void sumOfDigit(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    printf("Sum=%d",sum);
}
int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    sumOfDigit(n);
    return 0;
}