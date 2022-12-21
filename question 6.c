/*Write a program to calculate the length of the string using a pointer*/
#include<stdio.h>
int length(char *p)
{ int count=0;
    while(*p!='\0')
    { count++;
        p++;
    }
 return count;
}
int main()
{ char str[20]="harsh kumar";
  char *p=str;
    printf("length of the string is %d",length(p));
 return 0;
}
