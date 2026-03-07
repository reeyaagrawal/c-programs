// Make your own power function
#include<stdio.h>
int power(int n,int m){
    int result=1;  // n->base,m->power
    for(int i=0;i<m;i++){
        result*=n;
    }
    return result;
}
double powr(int x,int n){//x^n
    long binForm=n;
    double ans=1;
    if(n<0){
        x=1/x;
        binForm=-binForm;
    }
    while (binForm>0)
    {
       if(binForm%2==1){
        ans*=x;
       }
       x*=x;
       binForm/=2;
    }
    return ans;
}
int main(){
printf("2^3=2*2*2=%d",powr(2,3));
    return 0;
}