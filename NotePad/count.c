
#include <stdio.h>

int main() {
 int i;
 int n;
 int count = 0;
 printf("Enter the number");
 scanf("%d",&n);
 while(n!=0){
     n = n/10;
     count++;
}
 printf("the digit is %d",count);

}