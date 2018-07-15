#include<stdio.h>
int main()
{
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if(year%4==0) 
      printf("enter the leap year",year);
     else
      printf("enter the not leap year",year);
    
}
