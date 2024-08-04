                                //pankaj maali
#include <stdio.h>
 struct construction{
    char name[20];
    int price;
    int kg;
    int id;
    char mfgdate[20];
};
void add(struct construction item1 ,struct construction item2,struct construction item3,struct construction item4){
    printf("Cement name : %s\n",item1.name);
     printf("Cement Price : %d\n",item1.price);
      printf("Cement Wait is : %d kg \n ",item1.kg);
       printf("Cement id : %d\n",item1.id);
        printf("Cement Manufacturing Date : %s\n",item1.mfgdate);
        printf("---------------------------\n");
          printf("Cement name : %s\n",item2.name);
     printf("Cement Price : %d\n",item2.price);
      printf("Cement Wait is : %d kg \n ",item2.kg);
       printf("Cement id : %d\n",item2.id);
        printf("Cement Manufacturing Date : %s\n",item2.mfgdate);
         printf("---------------------------\n");
          printf("Paint Name : %s\n",item3.name);
     printf("Paint Price : %d\n",item3.price);
      printf("Paint Wait is : %d kg \n ",item3.kg);
       printf("Paint id : %d\n",item3.id);
        printf("Paint Manufacturing Date : %s\n",item3.mfgdate);
         printf("---------------------------\n");
   printf("Pipe Name : %s\n",item4.name);
     printf("Pipe Price : %d\n",item4.price);
      printf("Pipe Wait is : %d kg \n ",item4.kg);
       printf("Pipe name : %d\n",item4.id);
        printf("Pipe Manufacturing Date : %s\n",item4.mfgdate);
         printf("---------------------------\n");
}

int main() {
    struct construction item = {"UltraTack",365,50,1245,"20/07/2023"};
    struct construction item1 = {"Birla",290,45,10565,"10/11/2023"};
    struct construction item2 = {"Asian Paint",80,1,48205,"02/09/2023"};
    struct construction item3 = {"CPVC Pipe",40,150,16595,"17/05/2022"};
   
    
   add(item,item1,item2,item3);

    return 0;
}