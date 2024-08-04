// Online C compiler to run C program online
#include <stdio.h>
typedef struct bike{
    char name[15];
    int price;
    char Bike_No[15];
    char color[10];
    int discount;
    char available[10];
    int Top_speed;
}delux;
void add(delux bike1){
    printf("Name : %s\n",bike1.name);
    printf("Price  : %d\n",bike1.price);
    printf("Bike Number : %s\n",bike1.Bike_No);
    printf("Bike color : %s\n",bike1.color);
    printf("Bike Discount : %d \n",bike1.discount);
    printf("Bike Available : %s\n",bike1.available);
     printf("Bike Speed : %d\n",bike1.Top_speed);
}
int main() {
    delux bike1={"Pulsur",120000,"M P 41 1245 D","black",13,"Yes",240};
    add(bike1);

    return 0;
}