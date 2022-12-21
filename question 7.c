/*Write a program to count the number of vowels and consonants in a string using a
pointer.*/
#include<stdio.h>
void alphacheck(char *p)
{ int vowels=0,consonants=0;
    while(*p!='\0')
    { if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'){
        vowels++;
      }
      else {
       consonants++;
      }
      p++;
    }
    printf("number of vowels in the string is %d\n",vowels);
    printf("number of consonants in the string is %d\n",consonants);
}
int main()
{ char str[20]="harsh kumar";
  char *p=str;
    alphacheck(p);
 return 0;
}
