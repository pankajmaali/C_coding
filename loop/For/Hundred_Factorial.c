
#include <stdio.h>

int main() {
    double fact=1;
  for(int i=1;i<=100;i++){
      fact*=i;
  }
  printf("%f",fact);
    return 0;
}