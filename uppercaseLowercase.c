//uppercase/lowercase
#include<stdio.h>
int main(){
    char ch;
    printf("enter character:");
    scanf("%s",&ch);
    if(ch>='a'&&ch<='z'){
        printf("lowercase");
    }else if(ch>='A'&&ch<='Z'){
        printf("uppercase");
    }else{
        printf("not a  valid character");
        
    }
    return 0;
}