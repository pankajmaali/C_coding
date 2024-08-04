
#include<stdio.h>
struct cement{
     int price, kg,id;
     char name[15], mfgdate[25],stack[5];
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
  struct cement myArStruct [50];
for(int i = 0; i<4; i++){
 int price, kg, id;
    char name[50], mfgdate[20], stack[20];
    printf("Enter cement price : ");
    scanf("%d",&price);
      printf("Enter cement Id number  : ");
    scanf("%d",&id);
    printf("Enter cement in kG : ");
     scanf("%d",&kg);
    printf("Enter cement brand Name  :");
        scanf("%s",&name);
    printf("Enter MFG Date   :");
     scanf("%s",&mfgdate);
    printf("Enter Stack  :"); 
    scanf("%s",&stack);
    myArStruct[i].price = price;
    myArStruct[i].kg = kg;
    myArStruct[i].id = i+1;
    snprintf(myArStruct[i].name, sizeof(myArStruct[i].name), "%s", name);
    snprintf(myArStruct[i].mfgdate, sizeof(myArStruct[i].mfgdate), "%s", mfgdate);
    snprintf(myArStruct[i].stack, sizeof(myArStruct[i].stack), "%s", stack);
    printf("---------------------------------------Enter Next  CEMENT STRUCT----------------------------------------------------------\n");
} 

 for (int i = 0; i < 4; i++)
 {
     show(myArStruct[i]);
     
 }

   return 0;
}