#include<stdio.h>

int main(){
    int marks;
    printf("Please Enter The Marks Obtained : ");
    scanf("%d",&marks);
    if(marks>30){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
    return 0;
}