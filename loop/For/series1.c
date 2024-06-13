
// 1 – 2 + 3  - 4 + 5 

#include <stdio.h>

int main(){


int n = 5;
int sum = 0;
int i = 1;
for ( ; i <=n; i++)
{

    printf("%d", i );
    if(i%2==0){
        printf(" + ");
       
        sum+=i;

    }else{
         
        
         sum-=i;
    }
     if(i<n&&i%2!=0){
         
        printf(" - ");
          
         
    }

    // fact*=i;
}




// printf("%d",i);


printf(" = %d", sum);
    return 0;


}