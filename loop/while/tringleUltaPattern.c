
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int i = n;
    while(i>=1){
        i--;
        int j = 0;
        while(j<=i){
            j++;
            printf("*");
        }
        printf("\n");
    }

    return 0;
}