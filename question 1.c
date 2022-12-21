/*Write a function to swap values of two in variables of calling function.*/
#include<stdio.h>
void swap(int *p,int *q)
{ int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{ int a=10,b=20;
  int *p=&a,*q=&b;
     swap(p,q);
   printf("value after swaping\n");
   printf("a=%d , b=%d",a,b);
 return 0;
}
