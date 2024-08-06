// #include<stdio.h>
// int main(){
// int arr[5]={5,10,6,8,3};
// int idx,max=arr[0];
// for(int i=0;i<5;i++)
// {
//     if(arr[i]<max){
//         max=arr[i];
//         idx=i;
//     }
// }
// printf("The Minimum Number is %d : and our Index Number is %d",max,idx);

//     return 0;
// }


//User Input 

#include<stdio.h>
int main(){
int arr[5];
int idx,max=arr[0];

for(int i=0;i<5;i++)
{  printf("Enter a Number of [%d]",i);
    scanf("%d",&arr[i]);
      if(arr[i]<max){
        max=arr[i];
        idx=i;
    }
}

printf("The Minimum Number is %d : and our Index Number is %d",max,idx);

    return 0;
}