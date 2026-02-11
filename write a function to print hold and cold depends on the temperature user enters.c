// write a function to print "hold" and "cold" depends on the temperature user enters
#include<stdio.h>
int main(){
    int temp;
    printf("enter temp: ");
    scanf("%d",&temp);
    // hot: 25°C (77°F) and above , Warm/Comfortable: Around 20-26°C (68-79°F) , Cool: Below 20°C (68°F).
    if(temp>=25){
        printf("Hot");
    }else if(temp>20 && temp<25){
        printf("comfortable");
    }else{
        printf("cool");
    }
    return 0;
}