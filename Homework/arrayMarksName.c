// Online C compiler to run C program online
#include <stdio.h>

int main() {
  char name[5]={'a','b','c','d','e'};
  int marks[5];
  for(int i=0; i<5;i++){
      printf("Enter a  marks [%c] : ",name[i]);
      scanf("%d",&marks[i]);
  }
  for(int j=0;j<5;j++){
      printf("\nyoure name is = %c : ",name[j]);
      printf("youre marks is = %d ",marks[j]);
  }
    return 0;
}