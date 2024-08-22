// find vowel and consonant letter
#include <stdio.h>
int main (){
char c;
printf("Enter your latter:");
scanf("%c", &c);

if (c== 'a' || c=='e' || c=='i' || c=='o' || c=='u' || c== 'A' || c=='E' || c=='I' || c=='O' || c=='U') 
{
    printf("%c is a vowel letter", c);
}

else
{
    printf("%c is a Consonant letter", c);
}

    return 0; 
}