#include<stdio.h>
int main()
{
    int a = 9, b = 10;
    int addition, subtraction, multiplication, division, modulus;
    addition = a + b; //addition of 9 and 10
    subtraction = a - b; //subtract 9 from 10
    multiplication = a * b; //Multiplying both 9 and 10
    division = a / b; //dividing 10 by 9 (number of times)
    modulus = a % b; //calculation the remainder
    printf("Addition of two numbers a, b is : %d\n", addition);
    printf("Subtraction of two numbers a, b is : %d\n", subtraction);
    printf("Multiplication of two numbers a, b is : %d\n", multiplication);
    printf("Division of two numbers a, b is : %d\n", division);
    printf("Modulus of two numbers a, b is : %d\n", modulus);
return 0;
}