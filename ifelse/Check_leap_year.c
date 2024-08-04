

#include <stdio.h>

int main() {
int year;

printf("Enter a Year : ");
scanf("%d",&year);
if(year%4==0||year%100==0||year%400==0){
    printf("leap year is : %d",year);
}
else{
    printf("Note a leap year : %d",year);
}


    return 0;
}