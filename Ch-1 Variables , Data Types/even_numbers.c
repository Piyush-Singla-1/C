#include<stdio.h>
int main(){
    int number;
    printf("Please Enter The Number : ");
    scanf("%d",&number);
    printf("%d",number%2==0);
    return 0;
}