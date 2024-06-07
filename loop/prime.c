
#include <stdio.h>

int main() {
    int i;
    int n;
    int a = 0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i = 2; i<n;i++){
        if(n%i==0){
            // a = 1;
            break;
        }
        
    }
    if(i==n){
        printf("%d is prime number",n);
    }
else{
    printf("%d is note prime",n);
}
    return 0;
}