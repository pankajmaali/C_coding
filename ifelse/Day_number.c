// WAP to input day number and print week day.
#include <stdio.h>

int main() {
int n;

printf("Enter a day number  : ");
scanf("%d",&n);
if(n==1){
    printf("Sunday");
}
else if(n==2){
    printf("Monday");
}
else if(n==3){
    printf("Teusday");
}
else if(n==4){
    printf("Wednasday");
}
else if(n==5){
    printf("Thursday");
}
else if(n==6){
    printf("Friday");
}
else if(n==7){
    printf("Saturday");
}
else{
    printf("Invalid value ");
}

    return 0;
}