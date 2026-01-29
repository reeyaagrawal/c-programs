#include<stdio.h>
// swap(call by value)
void swap(int a,int b){
    int c=a;
    a=b;
    b=c;
    printf("\nAfter swapping via call by value\nx=%d\ty=%d",a,b);
}
// swap(call by reference)
void _swap(int*a,int*b){
     int c = *a;
    *a=*b;
    *b=c;
    printf("\nAfter swappint via call by reference\nx=%d\ty=%d",*a,*b);

}
int main(){
    int x,y;
    printf("enter x=");
    scanf("%d",&x);
    printf("enter y=");
    scanf("%d",&y);
    swap(x,y);
    // printf("x=%d\ty=%d",x,y);   values are swapped but dont reflect in main function and only accessible in function call onlyy ;)
    _swap(&x,&y);
    // printf("x=%d\ty=%d",x,y);

    return 0;
}