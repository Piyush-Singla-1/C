
#include <stdio.h>

int main() {
    printf("Please Enter The Number : ");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2){
        printf("%d \n",i);
    }

    return 0;
}