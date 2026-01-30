// Write a function to calculate the sum, product & average of 2 numbers. Print that average in the main function.
#include<stdio.h>
void calculate(){
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    int sum=a+b;
    int product=a*b;
    float average=sum/2;
    printf("sum=%d\n",sum);
    printf("product=%d\n",product);
    printf("average=%f\n",average);
}
int main(){
calculate();
    return 0;
}