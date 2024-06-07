#include <stdio.h>
void main()
{
    int m;
    printf("enter a month number");
    scanf("%d",&m);
    switch (m)
    {
    case 1:
        printf("january");
        break;

         case 2:
        printf("fevruary");
        break;
         case 3:
        printf("march");
        break;
         case 4:
        printf("april");
        break;
         case 5:
        printf("may");
        break;
         case 6:
        printf("jun");
        break;
         case 7:
        printf("july");
        break;
         case 8:
        printf("august");
        break;
         case 9:
        printf("september");
        break;
         case 10:
        printf("octower");
        break;
         case 11:
        printf("november");
        break;
         case 12:
        printf("december");
        break;

    
    default:
    printf("enter the corecct number");
        break;
    }
}