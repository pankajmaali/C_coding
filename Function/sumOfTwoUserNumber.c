// Online C compiler to run C program online
#include <stdio.h>
void add(int n,int m,int sum){
         printf("%d",n);
          sum=sum+n;
         printf(" = %d",sum);
        
         if(n<m){
             printf(" + ");
         }
          
    if(n==m){
    return;
    }
 add(n+1,m,sum);
   
}
int main() {
   int n;
   int m;
   int sum=0;
   
   printf("Enter a start value : ");
   scanf("%d",&n);
    printf("Enter a ending value : ");
   scanf("%d",&m);
   add(n,m,sum);
    return 0;
}