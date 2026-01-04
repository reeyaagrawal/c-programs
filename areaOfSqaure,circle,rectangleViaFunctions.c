// Write functions to calculate area of a square, a circle & a rectangle.
#include<stdio.h>
int areaSquare(int side){
    return side*side;
}
float areaCircle(int rad){
    return 3.14*rad*rad;
}
int areaRectangle(int a,int b){
    return a*b;
}
int main(){
    int x,y;
    printf("enter x: ");
    scanf("%d",&x);
    printf("enter y: ");
    scanf("%d",&y);
    float cir=areaCircle(x);
    printf("area of circle of  radius %d is:%f ",x,cir);
    return 0;
}