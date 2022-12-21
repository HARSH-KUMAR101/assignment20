/*Write a function to swap strings of two char arrays of calling functions.*/
#include<stdio.h>
void swapstring(char *p,char *q)
{ int i;
  char ch;
    for(i=0;i<20;i++)
    { ch=p[i];
      p[i]=q[i];
      q[i]=ch;
    }
}
int main()
{ char str1[20]="harsh";
  char str2[20]="not harsh";
  char *p=str1;
  char *q=str2;

    swapstring(p,q);
    printf("%s\n",str1);
    printf("%s",str2);
 return 0;
}
