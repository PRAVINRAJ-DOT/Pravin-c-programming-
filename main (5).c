#include<stdio.h>
int main()
{
    int n;
    int r = 0;
     int digit;
      int  sign = 1;
    scanf("%d",&n);
    if( n < 0)
    {
       sign = -1;
       n = -n;
    }
    while(n > 0)
    {
        digit = n % 10;
        r = r *10 + digit;
        n = n / 10;
    }
    r = r * sign;
    printf("%d",r);
    
}