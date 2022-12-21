/*Write a program to find the maximum number between two numbers using a pointer*/
int max(int *p,int *q)
{ if(*p>*q)
    return *p;
return *q;
}
int main()
{ int a=10,b=20;
  int *p=&a,*q=&b;
   printf("max is %d", max(p,q));
 return 0;
}
