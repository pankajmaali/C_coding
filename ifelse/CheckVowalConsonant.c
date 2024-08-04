// WAP to check inter char is vowel or consonant


#include <stdio.h>

int main() {
char n;
char m;
printf("Enter a charecter first : ");
scanf("%c",&n);

if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='y'){
    printf("The charecter is vowel  %c",n);
}
else{
        printf("The charecter is consonant %c",n);
}
    return 0;
}