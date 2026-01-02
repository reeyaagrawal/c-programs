// Write a Program to give grades to a student marks < 30 is C 30 <= marks < 70 is B 70 <= marks < 90 is A 90 <= marks <= 100 is A+
#include<stdio.h>
int main(){
    int marks;
    printf("enter marks: ");
    scanf("%d",&marks);
    if(marks>0 && marks<30){
        printf("grade:'C'");
    }else if(marks<70 && marks>=30){
        printf("grade:'B'");
    }else if(marks<90&& marks>=70){
        printf("grade:'A'");
    }else if(marks<=100&& marks>=90){
        printf("grade:'A+'");
    }else{
        printf("invalid marks");
    }
    return 0;
}