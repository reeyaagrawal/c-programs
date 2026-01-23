// Write a function to calculate Percentage of a student from Marks in Science, Math & Sanskrit.
#include<stdio.h>
float percentage(int scienceMarks,int mathMarks,int sanskritMarks){
    return (scienceMarks+mathMarks+sanskritMarks)/3;

}
int main(){
    int sanskrit,maths,science;
    printf("enter marks in Science: ");
    scanf("%d",&science);
    printf("enter marks in Sanskrit: ");
    scanf("%d",&sanskrit);
    printf("enter marks in Maths: ");
    scanf("%d",&maths);
    printf("percentage is:%f",percentage(maths,science,sanskrit));
    return 0;
}