#include<stdio.h>

int main(){
    char ch;
    printf("Please Enter The Letter : ");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z'){
        printf("Upper Case Letter");
    }
    else if (ch>='a' && ch<='z'){
    printf("Lower Case Letter");
    }
    else {
        printf("Not An English Letter");
    }
    return 0;
}