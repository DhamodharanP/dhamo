#include<stdio.h>
void main()
{
    int  a,b,c,larg;
    printf("enter the number:");
    scanf("%d\t%d\t%d",&a,&b,&c);
    if(a>b)
      if(a>c)
        larg=a;
      else
         larg=c;
    else
      if(b>c)
         larg=b;
      else
         larg=c;
    printf("%d%d%d\t%d",a,b,c,larg);
         
}
