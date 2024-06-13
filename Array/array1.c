#include <stdio.h>

int main(){
int j,temp;
int arr[5];
for(int i=0;i<5;i++){
    printf("Enter a number %d : ",i+1);
    scanf("%d",&arr[i]);
}
printf("jesa tha besa hi ");
for(int i = 0;i<5;i++){
    printf("%d\n",arr[i]);
}
printf("badal diya ");
for(int i=0;i<4;i++){
    for(int j=i+1;j<5;j++){
        if(arr[i]>arr[j]){
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
}
    return 0;
}