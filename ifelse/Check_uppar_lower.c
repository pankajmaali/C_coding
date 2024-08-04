//WAP to check inter char Is upper case or lower case


#include <stdio.h>

int main() {
char n;

printf("Enter a number first : ");
scanf("%c",&n);

if(n==65||n<=90){
    printf("The number is uparcase  %c",n);
}
else{
        printf("The number is lower case %c",n);
}
    return 0;
}