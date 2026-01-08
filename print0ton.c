// print numbers from 0 to n (n is given by user)
#include<stdio.h>
int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    int i=0;
    while(i<=n){
        printf("%d ",i);
        i++;
    }
    return 0;
}