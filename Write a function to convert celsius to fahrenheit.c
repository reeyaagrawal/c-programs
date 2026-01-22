// Write a function to convert celsius to fahrenheit. The formula provided is: (f=(c*9/5)+32)
#include<stdio.h>
float convertFahrenheit(float celsius){
    return(celsius*9/5)+32;
}
int main(){
    float cel;
    printf("enter celsius:");
    scanf("%f",&cel);
    printf("%f in fahrenheit is %f",cel,convertFahrenheit(cel));
    return 0;
}