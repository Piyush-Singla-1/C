#include<stdio.h>

int main(){
    int n;
    printf("Please Enter The Number : ");
    scanf("%d",&n);
    int factorial=1;

    for (int i=1;i<=n;i++){
        factorial=factorial*i;

    }
    printf("The Factorial Of %d is :%d",n,factorial);
    return 0;
}