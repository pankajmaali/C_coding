// WAP to take any age and check age criteria (child, teen, young, old)

#include <stdio.h>

int main() {
int n;

printf("Enter a age: ");
scanf("%d",&n);

if(n>=1&&n<=12){
    printf("Child ");
}
else if(n>=13&&n<=19){
        printf("Teen ");
}
else if(n>=20&&n<=35){
    printf("Young ");
}
else{
    printf("Old ");
}
    return 0;
}