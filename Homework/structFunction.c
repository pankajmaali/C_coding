
#include<stdio.h>
struct cement{
    char name[15];
    int price;
    int kg;
    int id;
    char mfgdate[25];
    char stack[5];
};
void show(struct cement item){
    printf("Name %s\n",item.name);
     printf("Price %d\n",item.price);
      printf("weight %d\n",item.kg);
       printf("Id %d\n",item.id);
        printf("Manufactiuring Date %s\n",item.mfgdate);
         printf("Availabale %s\n",item.stack);
}
int main()
{
    struct cement item1 = {"Ultratack",360,50,12364,"20/07/2023","yes"};
    struct cement item2 = {"Birla",350,55,10465,"10/07/2022","yes"};
    struct cement item3 = {"Asian Paint",70,1,15856,"02/11/2023","yes"};
    struct cement item4 = {"CPVC Pipe",90,1,16685,"12/02/2024","yes"};
    struct cement item5 = {"Glass",120,1,1685,"05/06/2023","yes"};
 show(item1);
 printf("\n");
  show(item2);
 printf("\n");
  show(item3);
 printf("\n");
  show(item4);
 printf("\n");
  show(item5);
 printf("\n");
   return 0;
}