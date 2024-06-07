// 123454321
//  2345432
//   34543
//    454
//     5
#include <stdio.h>

int main() {
    int i;
    int j;
    int k;
    int s;
    int n;
    int a;
    printf("Enter the nomber :");
    scanf("%d",&n);
 for (i=1;i<=n;i++)
 {
     for(k=1;k<=i;k++){
         printf(" ");
     }
     for(j=i;j<=n;j++){
         printf("%d",j);
     }
     for(a=n-1;a>=i;a--){
         printf("%d",a);
     }
    
         printf("\n");
 }

    return 0;
}