/*Write a program to print the elements of an array in reverse order.*/
#include<stdio.h>
void rev(int *p,int n)
{ int i,temp=0;
    for(i=0;i<n/2;i++)
    { temp=p[i];
       p[i]=p[(n-1)-i];
       p[(n-1)-i]=temp;
    }
}
int main()
{  int a[5]={10,20,30,40,50};
  int i;
    rev(a,5);
     for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
 return 0;
}
