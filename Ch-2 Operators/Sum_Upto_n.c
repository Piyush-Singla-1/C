#include<stdio.h>

int main(){
    int n;
    int sum=0;
    printf("Enter Value : ");
    scanf("%d",&n);
    int k=n;
    for (int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Required Sum is : %d \n",sum);
    for(int l=1;l<=k;k--){
        printf("%d \n",k);
    }
    return 0;
}