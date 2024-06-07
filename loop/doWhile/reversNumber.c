
#include <stdio.h>

int main() {
int rev;
int rem;
int n;
printf("Enter a number : ");
scanf("%d",&n);
do{
    rem = n % 10;
    rev = rev * 10 + rem;
    n/=10;
printf("%d",rem  );
} while(n!=0);

    return 0;
}