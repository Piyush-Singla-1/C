#include<stdio.h>
void printhello(int count);
int main(){
    int count;
    printf("Please Enter The Count : ");
    scanf("%d",&count);
    printhello(count);
    
    return 0;
}
void printhello(int count){
    if (count==0){
        return;
    }
    else{
    printf("Hello World \n");
    printhello(count-1);
}
}