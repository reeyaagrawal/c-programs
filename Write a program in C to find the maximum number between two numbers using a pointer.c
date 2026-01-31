// Write a program in C to find the maximum number between two numbers using a pointer
#include<stdio.h>
int main(){
    int a,b;
    int *p1=&a;
    int *p2=&b;
    printf("enter two numbers:");
    scanf("%d",&a);
    scanf("%d",&b);
    if(*p1>*p2){
        printf("%d is maximum",*p1);
    }else{
        printf("%d is maximum",*p2);

    }
    return 0;
}