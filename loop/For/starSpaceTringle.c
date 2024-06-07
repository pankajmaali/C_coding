// **********
// ****  ****
// ***    ***
// **      **
// *        *
#include <stdio.h>

int main() {
    int n;
    int i;
    printf("Enter a number : ");
    scanf("%d",&n);
    int nsp;
    int nst = n;
    for( i = 1; i<=n; i++){
         for(int k = 1;k<=nst;k++){
           printf("*");
       }
       for(int a = 1;a<=nsp;a++){
           printf(" ");
       }
        for(int k = 1;k<=nst;k++){
           printf("*");
       }
       nsp+=2;
       nst--;
        printf("\n");
    }
    

    return 0;
}