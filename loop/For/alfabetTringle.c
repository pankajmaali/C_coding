
#include <stdio.h>

int main() {
   int n;
   printf("Enter a number : ");
   scanf("%d",&n);
for(int i = 1; i<=n;i++){
    int a = 1;
    for(int j = 1; j<=i;j++){
        int d = a + 64;
        char c=(char)d;
        printf("%c ",c);
        a++;
    }
    printf("\n");
}
    return 0;
}