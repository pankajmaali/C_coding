

#include<stdio.h>
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
for(int i = 0;i<n;i++){
    for(int j = n;j>=1;j--){
        if(i==j){
            printf("*");
        }
        else{
            printf("#");
        }
    }
     for(int j = 0;j<=n;j++){
        if(i==j){
            printf("*");
        }
        else{
            printf("#");
        }
    }
    printf("\n");
}
    return 0;
}