// *000000
// 0*00000
// 00*0000
// 000*000
// 0000*00
// 00000*0
// 000000*
#include <stdio.h>

int main() {
    int n;
    int i;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for( i = 0; i<n; i++){
     for(int j = 0;j<n;j++){
         
       if(j==i){
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