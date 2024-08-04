// WAP to print Even odd series
#include <stdio.h>

int main() {
int n;
printf("Enter a day number  : ");
scanf("%d",&n);
printf("Even series is : \n");
for(int i=1;i<=n;i++){
   
    if(i%2==0){
        
        printf("%d\n",i);
    }
   
}
printf("Odd series is : \n");
for(int i=1;i<=n;i++){
     if (i%2!=0)
     {
       
        printf("%d\n",i);
     }
     
}


    return 0;
}