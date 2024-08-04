// Enter a outer array value : 1
// Enter a inner array value : 21
// Enter an element [0][0]: U
// Enter an element [0][1]: N
// Enter an element [0][2]: I
// Enter an element [0][3]: V
// Enter an element [0][4]: E
// Enter an element [0][5]: R
// Enter an element [0][6]: S
// Enter an element [0][7]: A
// Enter an element [0][8]: L
// Enter an element [0][9]: L
// Enter an element [0][10]: _
// Enter an element [0][11]: I
// Enter an element [0][12]: N
// Enter an element [0][13]: F
// Enter an element [0][14]: O
// Enter an element [0][15]: R
// Enter an element [0][16]: M
// Enter an element [0][17]: A
// Enter an element [0][18]: T
// Enter an element [0][19]: I
// Enter an element [0][20]: C
// UNIVERSALL_INFORMATIC
#include <stdio.h>

int main() {
    int outer;
    int inner;
    printf("Enter a outer array value : ");
    scanf("%d",&outer);
    printf("Enter a inner array value : ");
    scanf("%d",&inner);
    char arr[outer][inner];
 for (int i = 0; i < outer; i++) {
        for (int j = 0; j < inner; j++) {
            printf("Enter an element [%d][%d]: ", i, j);
            scanf(" %c", &arr[i][j]); 
        }
    }
 for(int i=0;i<outer;i++){
     for(int j=0;j<inner;j++){
         printf("%c",arr[i][j]);
        
     }
   
 }



  
  
  
    return 0;
}