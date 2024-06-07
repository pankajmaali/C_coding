#include <stdio.h>
void main()
{
    char s;
printf("enter the charecter : ");
scanf("%c",&s);

switch (s)
{
case 's':
    int side;
    int area;
    printf("enter the length of side : ");
    scanf("%d",&side);
    area = side*side;
    printf("%d",area);
    
    break;
case 'r':
int length;
int width;
int rectengel;
printf("enter the  length : ");
scanf("%d",&length);
printf("enter the width : ");
scanf("%d",&width);
rectengel = length * width;
printf("%d",rectengel);
break;


case 'c':
float circal;
float radius;
printf("enter the radius of circle : ");
scanf("%f",&radius);
circal = 3.14*radius*radius;
printf("%f",circal);
break;


case 't':
int height;
int wid;
int aria;
printf("enter a height : ");
scanf("%d",&height);
printf("enter a width : ");
scanf("%d",&wid);
aria = (height * wid)/2;
printf("%d",aria);
break;
default:
printf("invalid character");
    break;
}
}

