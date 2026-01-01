// write  a program to check whethwe a student is pass or fail.(above 30->pass otherwise fail)
#include<stdio.h>
int main(){
    int marks;
    printf("enter marks:");
    scanf("%d",&marks);
    // if(marks>30){
    //     printf("pass");
    // }else{
    //     printf("fail");
    // }
    marks>=30?printf("pass"):printf("fail");
    return 0;
}