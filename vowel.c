#include<stdio.h>
void main()
{
 char ch;
 printf("enter the vowels:");
 ch=getchar();
 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
  printf(" the vowels %c",ch);
 else
  printf("enter the not vowels %c",ch);
}
 
