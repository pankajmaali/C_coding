//Simple Program

// #include <stdio.h>
// int main(){
// int sum=0;
//     int arr[10]={1,5,8,6,9,4,8,6,7,5};
//     for(int i=0;i<10;i++){
// sum=sum+arr[i];
//     }
//     printf("The Sum Is %d",sum);
//     return 0;
// }

// User Input Array Sum

#include <stdio.h>
int main()
{
    int sum = 0;
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a Number [%d]", i);
        scanf("%d", &arr[i]);
    }for (int i = 0; i < 10; i++)
    {
      sum=sum+arr[i];
    }

    printf("The Sum Is %d", sum);
    return 0;
}