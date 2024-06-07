#include <stdio.h>
void  main (){

    char ch;
    printf("enter a charecter : ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'){
        ch=ch-32;
    }
    else{
        ch=ch+32;
        
    }
    printf("%c",ch);
} 