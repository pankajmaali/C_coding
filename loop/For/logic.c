#include <stdio.h>

int main() {
    int num = 1; 
    int dev; 
int n=1;
    
    while (n) {
        dev = 1;
        for (int i = 1; i <= 10; i++) {
            if (num % i != 0) {
                dev = 0; 
                break;
            }
        }
        if (dev%2!=0) {
            break;
        }

        num++; 
    }

  
    printf("1 se 10 tak divide sankhya : %d\n", num);

    return 0;
}
