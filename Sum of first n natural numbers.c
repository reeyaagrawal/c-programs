// Sum of first n natural numbers.
#include<stdio.h>
int calculateSum(int n){
     int sum=0;
    if(n==0) return sum;
   
    return n+=calculateSum(n-1);
}
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
   printf("sum of first %d natural number is %d",n,calculateSum(n));
    return 0;
}