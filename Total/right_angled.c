#include <stdio.h>
int main(){
int num,i=1;
printf("Enter a number : ");
scanf("%d",&num);
while(i<=num){
   int j=1;
while(j<=i){
    
    printf("*");
    j++;
}
i++;
printf("\n");

}

    return 0;
}