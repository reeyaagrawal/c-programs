#include<stdio.h>
int main(){
    // even->1
    // odd->0
    int a;
    printf("enter number:");
    scanf("%d",&a);
    printf("\n%d",a%2==0);
    return 0;
}