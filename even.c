#include <stdio.h>
int main(){
    int even;
    printf("enter a number : ");
    scanf("%d",&even);
    if(even%2==0){
        printf("even number");
    }
    else{
        printf("odd number");
    }
}
