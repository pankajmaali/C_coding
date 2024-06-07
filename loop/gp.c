
#include <stdio.h>

int main() {
    int i;
    int n;
    int a = 3;
    printf("enter a number : ");
    scanf("%d",&n);
    for(i = 1; i<=n;i++){
        printf("%d \n",a);
        a = a*4;
    }

}