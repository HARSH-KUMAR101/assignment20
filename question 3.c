/*Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]*/
#include<stdio.h>
void sort(int *p,int n)
{ int temp=0,i,j;
     for(i=0;i<n-1;i++)
    { for(j=i+1;j<n;j++)
        { if(p[i]>p[j]){
            temp=p[i];
            p[i]=p[j];
            p[j]=temp;
           }
        }
    }
}
int main()
{ int a[10]={3,2,3,11,5,6,12,8,9,20};
  int *p=a,i;
    sort(p,10);
    for(i=0;i<10;i++)
    { printf("%d ",a[i]);
    }
return 0;
}
