#include <stdio.h>
int main(){
   char First_Name[20];
   char Last_name[20];
   char Address[20];
   int Roll_number;
   int class;
   char subject[5]={'h','e','m','p','c'};
   int marks[5];
   int Total=0;
   float Percantage=0;
   float average;
   int sum;
   printf("Enter a First Name : ");
   scanf("%s",&First_Name);
   printf("Enter a Last Name : ");
   scanf("%s",&Last_name);
   printf("Enter a Address : ");
   scanf("%s",&Address);
    
      while (1) {
         printf("Enter a Roll Number : ");
         scanf("%d",&Roll_number);
         if (Roll_number >= 0) {
            break;
         } else {
            printf("Invalid value.\n");
         }
      }

      while (1) {
          printf("Enter a class : ");
         scanf("%d",&class);
         if (class >= 0 && class <= 15) {
            break;
         } else {
            printf("Invalid value.\n");
         }
      }

   
 
   
 for (int i = 0; i < 5; i++) {
      while (1) {
         printf("Enter marks of subject [%d]: ", i);
         scanf("%d", &marks[i]);
         if (marks[i] >= 0 && marks[i] <= 100) {
            break;
         } else {
            printf("Invalid value.\n");
         }
      }
   }
 
 
 printf("________________________________________________________________________\n");
printf("| Youre First Name is %s \n",First_Name);            printf("|");
printf("| Youre Last Name is %s \n",Last_name);printf("|");
printf("| Youre Address is %s \n",Address);printf("|");
printf("| Youre Roll Number is %d \n",Roll_number);printf("|");
printf("| Youre class is %d \n",class);printf("|");
for (int i = 0; i < 5; i++)
{
    printf("| Youre subject is %c \n",subject[i]);printf("|");
}
       for (int  k = 0; k < 5; k++)
       {
        ;Total=Total+marks[k];
       }
       sum=Total;
		// average = sum / 5;
		Percantage = (sum / 5);
 printf("| Youre Total Marks is %d \n",sum);
//  printf("Youre Avarge Marks is %d \n",Total);
if(Percantage>=90&&Percantage<=100){
    printf("Grade A+\n");
    printf("you win leptop : \n");
}
else if(Percantage>=80&&Percantage<=89){
    printf("You win a mobile : \n");
    printf("Grade A\n");
}
else if(Percantage>=70&&Percantage<=79){
    printf("Grade B : \n");
}
else if(Percantage>=50&&Percantage<=69){
    printf("Grade C : \n");
}
else if(Percantage>=40&&Percantage<=49){
    printf("Grade D : \n");
}
else if(Percantage>=34&&Percantage<=39){
    printf("Grade E : \n");
}
else{
    printf("Fail");
}
 printf("Youre Percantage is %f",Percantage);



    return 0;

}