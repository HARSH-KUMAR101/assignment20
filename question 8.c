/*Write a program to compute the sum of all elements in an array using pointers.*/
#include<stdio.h>
int sum(int *p,int n)
{ int sum=0,i;
    for(i=0;i<n;i++)
    { sum=sum+*p;
        p++;
    }
 return sum;
}
int main()
{ int str[10]={1,2,3,4,5,6,7,8,9,10};
  int *p=str;
    printf("sum of all element of the array is %d",sum(p,10));
 return 0;
}
