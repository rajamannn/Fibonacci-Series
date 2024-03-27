#include<stdio.h>
int main()
{
 int a=1,b=1,t,i=1,n;
 printf("enter a number");
 scanf("%d",&n);

 printf("the fibonacci number are:\n");
 printf("%d %d",a,b);
 do
 {
     t=a+b;
     printf("%d,t");
     a=b;
     b=t;
     i=i+1;
 }
 while(i<=n-2);
 return 0;
}
