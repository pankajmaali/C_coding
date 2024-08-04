
#include <stdio.h>

int main()
{
    int num;
    printf("enter a number of arr size : ");
    scanf("%d",&num);
    int arr[num];
    int temp;
    for(int i=0;i<num;i++){
    printf("Enter a number [%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Unshorted array \n: ");
    for(int j=0;j<num;j++){
        printf("%d ",arr[j]);
    }
    for(int i=0;i<num-1;i++){
        for(int j=i+1;j<num;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
            }
        }
    }
    printf("\n Shorted array \n");
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}