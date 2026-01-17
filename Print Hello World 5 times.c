//  Print "Hello World" 5 times.
#include<stdio.h>
void printHello(int count){
    
    if(count==0) return;
    printf("hello world!\n");
    return printHello(count-1);
}
int main(){
    printHello(5);
    return 0;
}