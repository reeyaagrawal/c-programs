#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    int s=sum(a,b);
    printf("sum of %d and %d  is : %d",a,b,s);
    return 0;
}