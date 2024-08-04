
#include <stdio.h>

int main() {

int a=5;
int *p=&a;
int **p2=&p;
printf("Value of variable \n");
printf("%d\n",a);
printf("%d\n",*p);
printf("%d\n",**p2);

printf(" Address of a variable \n");

printf("%p\n",&a);
printf("%p\n",&p);
printf("%p\n",&p2);


    return 0;
}