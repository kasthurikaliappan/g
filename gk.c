#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter the value a,b,c");
 scanf("%d %d %d",&a,&b,&c);
 if(a>b&&a>c)
 {
 printf("the value a is greater than b&c");
 }
 else if(b>a&&b>c)
 {
 printf("the value b is greater than a&c");
 }
 else if(c>a&&c>b)
 {
 printf("the value c is greater than a&b");
 }
 else
 {
     printf("all numbers are equal");
 }
 return 0;
 }