#include<stdio.h>

int main(){
    printf("Please Enter a Number : ");
    int n;
    scanf("%d",&n);
    int i=7;
    while(i=7){
        if (n%i==0){
            printf("Thank You");
            break;
        }
        else {
            printf("Please Enter a Number : ");
            scanf("%d",&n);
        }
    }
    return 0;
}