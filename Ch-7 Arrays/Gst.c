#include<stdio.h>

int main(){
    int price[3];

    printf("Please Enter The Price Of First Item :- ");
    scanf("%d",&price[0]);

    printf("Please Enter The Price Of Second Item :- ");
    scanf("%d",&price[1]);

    printf("Please Enter The Price Of Third Item :- ");
    scanf("%d",&price[2]);

    printf("Price Of First Item Will Be :- %.1f \n",price[0]+0.18*price[0]);
    printf("Price Of Second Item Will Be :- %.1f \n",price[1]+0.18*price[1]);
    printf("Price Of Third Item Will Be :- %.1f \n",price[2]+0.18*price[2]);
    return 0;
}