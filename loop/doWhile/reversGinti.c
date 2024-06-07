
#include <stdio.h>

int main() {
int i;
int n;
printf("Enter a number : ");
scanf("%d",&n);
  i = n;
do {
   
  printf("%d\n", i);
  i--;
  
}
while (i >= 1);

    return 0;
}