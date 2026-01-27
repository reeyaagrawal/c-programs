// print the value of i from its pointer to pointer
#include<stdio.h>
int main(){
    int i;
    int*ptr=&i;
    int**pptr=&ptr;
    *ptr=27;
    printf("i=%d",**pptr);
    return 0;
}