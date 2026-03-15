// Write a C program to check whether a year is a Leap Year or not.
#include <stdio.h>
int main(){
    printf("Enter yr u wamt to check ");
    int yr;
    scanf("%d",&yr);
    if(yr%4==0){
        printf("Leap yr");
    }else{
        printf("Not a leap yr");
        // not  a leap yr
    }
    return 0;
}