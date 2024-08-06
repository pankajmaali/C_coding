
// #include <stdio.h>

// int main() {
//   int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//   int total=0;
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         total+=arr[i][j];
//     }
// }
// printf("%d",total);
//     return 0;
// }


//User Input

#include <stdio.h>
int main() {
    int outer,inner;
    printf("Enter a outer array size : ");
    scanf("%d",&outer);
    printf("Enter a inner array size : ");
    scanf("%d",&inner);
  int arr[outer][inner];
  for(int i=0;i<outer;i++){
      for(int j=0;j<inner;j++){
          printf("Enter a Element of array [%d][%d]",i,j);
          scanf("%d",&arr[i][j]);
      }
  }
  int total=0;
for(int i=0;i<outer;i++){
    for(int j=0;j<inner;j++){
        total+=arr[i][j];
    }
}
printf("%d",total);
    return 0;
}