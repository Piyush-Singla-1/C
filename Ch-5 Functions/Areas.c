#include<stdio.h>
float area_of_Square(float side);
float area_of_Rectangle(float l,float b);
float area_of_Circle(float r);

int main(){
    char a;
    printf("Enter s for area_of_Square \n");
    printf("Enter r for area_of_Rectangle \n");
    printf("Enter c for area_of_Circle \n");

    scanf("%c",&a);
    if (a=='s'){
        float side;
        printf("Please Enter The Side Of Square : \n");
        scanf("%f",&side);
        printf("area_of_Square is : %f",area_of_Square(side));
    }
    else if(a=='r'){
        float l;
        printf("Please Enter The Lenght Of Rectangle : ");
        scanf("%f",&l);
        float b;
        printf("Please Enter The Breagth Of Rectangle : ");
        scanf("%f",&b);
        printf("area_of_Rectangle is : %f",area_of_Rectangle(l,b));
    }
    else if (a=='c'){
        float r;
        printf("Please Enter The Radius Of Circle : \n");
        scanf("%f",&r);
        printf("area_of_Circle is : %f",area_of_Circle(r));
    }
    return 0;
}
float area_of_Square(float side){
    return ("%d",side*side);
}
float area_of_Rectangle(float l,float b){
    return ("%d",l*b);
}
float area_of_Circle(float r){
    return ("%.1f",3.14*r*r);
}