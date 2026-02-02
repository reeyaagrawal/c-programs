// Write a program in C to print all the letters in english alphabet using a pointer
#include<stdio.h>
int main(){
    char ch='a';
    char*ptr=&ch;
    printf("all the letters in english alphabet:\n");
    for(;*ptr<='z';(*ptr)++){
        printf("%c ",*ptr);
    }
    return 0;
}