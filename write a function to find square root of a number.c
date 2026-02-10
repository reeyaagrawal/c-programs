// write a function to find square root of a number
#include<stdio.h>
void squareRoot(int n){
    // int i;
    for(int i=1;i*i<=n;i++){
        if(n==i*i){
            printf("sqaure root of %d is %d",n,i);
            return;
        }
    }
        printf("sqaure root deoes not exist");
    // return i;
}
int main(){
squareRoot(9);
    return 0;
}