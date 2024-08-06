#include <stdio.h>
int main(){
int a,b,c;
printf("Enter Three Number To Find A Largest Number : ");
scanf("%d %d %d",&a,&b,&c);
if (a>b&&a>c)
{
   printf("gretest Number is %d ",a);
}
else if (b>a&&b>c)
{
   printf("gretest Number is %d ",b);
}

else if(c>a&&c>b){
    printf("gretest Number is %d ",c);
}
else{
    printf("Invalid Input");
}

    return 0;
}