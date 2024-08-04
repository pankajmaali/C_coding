
#include<stdio.h>
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
for(int i = 0;i<n;i++){
     
    
    for(int j = 0;j<n;j++){
        
        if(i==j){
            printf("*");
        }
        else{
            printf("0");
        }
    }
    if(n/2+1){
      int a = 1;

          for(int i=1;i<=a;i++){
        printf("*");
        
    }
    }
 
   

     for(int j = n-1;j>=0;j--){
        if(i==j){
            printf("*");
        }
        else{
            printf("0");
        }
    }
    printf("\n");
}
    return 0;
}



// #include <stdio.h>

// int main() {
//  int n;
//  printf("Enter a number : ");
//  scanf("%d",&n);
//  int p=1;
//  for(int i=1;i<=n;i++){
//      for(int j=1;j<=n;j++){
//          if(i==j){
//          printf("*");
//          }
//          else{
//              printf("0");
//          }
//      }
//        for(int a=1;a<=p;a++){
//            printf("*");
        
//     }
//        for(int j=n;j>=1;j--){
//          if(i==j){
//          printf("*");
//          }
//          else{
//              printf("0");
//          }
//      }
//      printf("\n");
//  }

//     return 0;
// }