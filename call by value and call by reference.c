//call by value and call by reference
#include<stdio.h>
void square(int n){
    n=n*n;
    printf("\n----By call by value----\nArea of square is %d",n);
}
void _square(int* n){
    *n=(*n)*(*n);
    printf("\n-----By call by reference-----\nArea of square is %d",*n);
}
int main(){
    int number;
    printf("enter number: ");
    scanf("%d",&number);
    square(number);
    _square(&number);
    return 0;
}