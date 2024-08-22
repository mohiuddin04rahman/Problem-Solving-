// fidn vowel and consonant with "switch" function
#include <stdio.h>
int main (){
char c;
printf ("Enter a letter:");
scanf ("%c", &c);

switch (c)

{
case 'a':
printf ("%c is a vowel latter", c);
break;

case 'e':
printf ("%c is a vowel latter", c);
break;

case 'i':
printf ("%c is a vowel latter", c);
break;

case 'o':
printf ("%c is a vowel latter", c);
break;

case 'u':
printf ("%c is a vowel latter", c);
break;

case 'A':
printf ("%c is a vowel latter", c);
break;

case 'E':
printf ("%c is a vowel latter", c);
break;

case 'I':
printf ("%c is a vowel latter", c);
break;

case 'O':
printf ("%c is a vowel latter", c);
break;

case 'U':
printf ("%c is a vowel latter", c);
break;

default :

printf("%c is a consonant latter", c);

}

    return 0;
}