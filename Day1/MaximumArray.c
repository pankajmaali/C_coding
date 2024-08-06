// #include<stdio.h>
// int main(){
// int arr[10]={5,8,6,9,3,4,7,5,2,3};
// int idx,max=arr[0];
// for(int i=0;i<10;i++)
// {
//     if(arr[i]>max){
//         max=arr[i];
//         idx=i;
//     }
// }
// printf("The Maximum Number is %d : and our Index Number is %d",max,idx);

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
   
}
for(int i=0;i<5;i++)
 { 
   
    
    if(arr[i]>max){
        max=arr[i];
        idx=i;
    }
}
printf("The Maximum Number is %d : and our Index Number is %d",max,idx);

    return 0;
}