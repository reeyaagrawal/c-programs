// create a 2D array  storing the tables of 2 and 3
#include<stdio.h>
void storeTable(int n){
    for(int i=1;i<=10;i++){
        printf("%d\t",n*i);
    }
    printf("\n");
}
int main(){
    storeTable(2);
    storeTable(3);
    return 0;
}