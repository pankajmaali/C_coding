#include <stdio.h>

void printGinti(int n,int end,int start) {
    if (start==n) {
        return;
    }
    printf("%d\n", n);
    printGinti(n + 1,end,start);
}

int main() {
    int start;
      printf("Enter a start number : ");
    scanf("%d",&start);
    int end;
    printf("Enter a start number : ");
    scanf("%d",&end);
    printGinti(1,end,start);
    return 0;
}
