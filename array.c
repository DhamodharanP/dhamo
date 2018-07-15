#include<stdio.h>
void main()
{
  int i,j,a,n;
  printf("enter the array integer:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    {
        printf("%7d",j);
        printf("\n");
    }
   }
   return 0;
  
}
