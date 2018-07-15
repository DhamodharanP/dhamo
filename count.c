#include<stdio.h>
void main()
{
    long long n;
    int count=0;
    printf("enter the integer:");
    scanf("%lld",&n);
    while(n!=0)
    {
        n/=10;
        ++count;
        printf("enter the no of digits=%d",count);
    }
    
}
