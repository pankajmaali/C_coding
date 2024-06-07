
#include <stdio.h>

int main() {
int i;
int n;
printf("Enter a number : ");
scanf("%d",&n);
  i = 1;
do {
   
  printf("%d\n", n*i);
  i++;
  
}
while (i <= 10);

    return 0;
}