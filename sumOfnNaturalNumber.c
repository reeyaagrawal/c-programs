//sum of first n natural number and print them in reverse
#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;

    }
    printf("sum of first n natural no is:%d",sum);
    printf("\nin reverse:\n");
    for(int i=n;i>=1;i--){
        printf("%d ",i);
    }
    return 0;
}