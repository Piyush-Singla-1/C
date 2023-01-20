#include<stdio.h>

int main(){
    int radius;
    float pie=3.14;
    printf("Please Enter The Radius Of A Circle : ");
    scanf("%d",&radius);

    printf("The Area Of Circle is : %f",pie*radius*radius);
    return 0;
}