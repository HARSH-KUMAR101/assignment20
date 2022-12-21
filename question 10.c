/*Write a program to print a string in reverse using a pointer*/
#include<stdio.h>
void rev(char *p,int n)
{ int i;
  char ch;
    for(i=0;i<n/2;i++)
    { ch=p[i];
       p[i]=p[(n-1)-i];
       p[(n-1)-i]=ch;
    }
}
int main()
{  char str[]="harsh";
   char *p=str;
  int i;
    rev(p,strlen(str));
     for(i=0;i<5;i++)
    {
        printf("%c",str[i]);
    }
 return 0;
}
