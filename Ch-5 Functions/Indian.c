#include<stdio.h>
void i();
void f();
int main(){
    char s;
    scanf("%c",&s);

    if (s=='i'){
        i();
    }
    else{
        f();
    }
    return 0;
}
void i(){
    printf("Indian");
}
void f(){
    printf("Bonjour");
}