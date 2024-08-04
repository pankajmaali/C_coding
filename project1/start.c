#include <stdio.h>

int g = 5;
int main(){

printf("%d",g);

int i;
int ans1,ans2,ans3,ans4,ans5,ans6;
int point1=5;
int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
int total1,total2,total3;
printf("Welcome to the game \n\n");
printf("\npress the 1 to start a game \n");
printf("\npress 0 to end the game \n");
scanf("%d",&i);
if(i==1){
    printf("The game has start \n\n");
}
else if(i==0){
    printf("The game has end \n");
}
else{
    printf("Invalid \n");

}
if(i==1){
    printf("(A) Which one is the first web browse in 1990\n\n");
    printf("(1) Internal Explorer\n\n");
    printf("(2) Mossaic\n\n");
    printf("(3) Mozilla\n\n");
    printf("(4) Nexus\n\n");

    printf("Enter youre answer : ");
    scanf("%d",&ans1);
    if(ans1==4){
        printf("Correct Answer \n\n");
     
        printf("You have scored %d point \n\n",point1);
    }
    else if(ans1==1||ans1==2||ans1==3){
         printf("Wrong answer \n");
        point1=0;
         printf("You have scored %d point \n\n",point1);
    }
    else{
      printf("Invalid answer : ");
    }
printf("The next question is : \n\n");

  printf("(B) Who is the father of C language?\n\n");
    printf("(1) Steve Jobs\n\n");
    printf("(2) James Gosling\n\n");
    printf("(3) Dennis Ritchie\n\n");
    printf("(4) Rasmus Lerdorf\n\n");

    printf("Enter youre answer : ");
    scanf("%d",&ans2);
    if(ans2==3){
        printf("Correct Answer \n");
         if(ans1==4){ point1=10;
         printf("You have total scored %d point \n",point1);
       }
       else{
           point1=0;
           printf("You have total scored %d point \n",point1);
       }
       } 

       
    else if(ans2==1||ans2==2||ans2==4){
         printf("Wrong answer \n");
    
    }
      else{
        printf("Invalid answer : ");
    }
    printf("The next question is : \n\n");

  printf("(C) Which of the following is not a valid C variable name??\n\n");
    printf("(1) int number;\n\n");
    printf("(2) float rate;\n\n");
    printf("(3) int variable_count;\n\n");
    printf("(4) int $main;\n\n");

    printf("Enter youre answer : ");
    scanf("%d",&ans3);
    if(ans3==4){
        printf("Correct Answer \n");
         if(ans2==3){ point1=15;
         printf("You have total scored %d point \n",point1);
       }
       else{
           point1=0;
           printf("You have total scored %d point \n",point1);
       }
      
    }
    else if(ans3==1||ans3==2||ans3==3){
         printf("Wrong answer \n");
        
         printf("You have total scored %d point \n",point1);
    }
    else{
        printf("Invalid answer : ");
    }
    //the next question
printf("The next question is : \n\n");

  printf("(D) Which is valid C expression?\n\n");
    printf("(1) int my_num = 100,000;\n\n");
    printf("(2) int my_num = 100000;\n\n");
    printf("(3) int my num = 1000;\n\n");
    printf("(4) int $my_num = 10000;\n\n");

    printf("Enter youre answer : ");
    scanf("%d",&ans4);
    if(ans4==2){
        printf("Correct Answer \n");
           if(ans3==4){ point1=20;
         printf("You have total scored %d point \n",point1);
       }
       else{
           point1=0;
           printf("You have total scored %d point \n",point1);
       }
        
    }
    else if(ans4==1||ans4==3||ans4==4){
         printf("Wrong answer \n");
        point1=20;
         printf("You have total scored %d point \n",point1);
    }
    else{
        printf("Invalid answer : ");
    }
     //the next question
printf("The next question is : \n\n");

  printf("(E) What is an example of iteration in C?\n\n");
    printf("(1) for\n\n");
    printf("(2) while\n\n");
    printf("(3) do-while\n\n");
    printf("(4) all of the mentioned\n\n");

    printf("Enter youre answer : ");
    scanf("%d",&ans5);
    if(ans5==4){
        printf("Correct Answer \n");
           if(ans4==2){ point1=25;
         printf("You have total scored %d point \n",point1);
       }
       else{
           point1=0;
           printf("You have total scored %d point \n",point1);
       }
        
    }
     else if(ans5==1||ans5==2||ans5==3){
         printf("Wrong answer \n");
    
         
    }
    else{
        printf("Invalid answer : ");
    }
      //the next question
printf("The next question is : \n\n");

   printf("(F)  What is #include <stdio.h>?\n\n");
    printf("(1) Preprocessor directive\n\n");
    printf("(2) Inclusion directive\n\n");
    printf("(3) File inclusion directive\n\n");
    printf("(4) None of the mentioned\n\n");

    printf("Enter youre answer : ");
    scanf("%d",&ans6);
    if(ans6==1){
        printf("Correct Answer \n");
         if(ans5==4){ point1=30;
         printf("You have total scored %d point \n",point1);
       }
       else{
           point1=0;
           printf("You have total scored %d point \n",point1);
       }
        
    }
     else if(ans6==2||ans6==3||ans6==4){
         printf("Wrong answer \n");
        
    }
    else{
        printf("Invalid answer : ");
    }
}

    return 0;

}