#include <stdio.h>
void main()
{
    char vowel;
    printf("enter a character : ");
    scanf("%c",&vowel);
    if(vowel=='a'||vowel=='e'||vowel=='i'||vowel=='o'||vowel=='u'){
        printf("vowel charecter");
    }
    else{
        printf("consonant character");
    }
   
} 