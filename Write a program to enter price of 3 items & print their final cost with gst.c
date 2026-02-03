// Write a program to enter price of 3 items & print their final cost with gst
#include<stdio.h>
int main(){
    float price[3];
    printf("enter 3 price: ");
    for(int i=0;i<3;i++){
        scanf("%f",&price[i]);
    }
    printf("price with gst are: ");
    for(int i=0;i<3;i++){
        printf("%f ",price[i]+0.18*price[i]);
    }
    return 0;
}