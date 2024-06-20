//    1/1!  + 3/3!  + 5/5!  -> 1.54166
#include <stdio.h>

int main() {
   int n;
   int m;
   printf("Enter a number : ");
   scanf("%d",&n);
//   printf("Enter a second number : ");
//   scanf("%d",&m);
   float power=1;
   float dev=1;
   float sum=0;
   float fact=1;
   int i = 1;
   int j=1;
   while(i<n*2){
       fact=fact*i;
    //   power=power*m;
      dev=i/fact;
    if(i%2!=0){
        
       sum=sum+dev;
    }
    if(i<=n){
        
       printf("%d/%d!",j,j);
    }
       if(i<n)printf(" + ");
       i++;
       j+=2;
   }
   printf(" = %f",sum);

    return 0;
}