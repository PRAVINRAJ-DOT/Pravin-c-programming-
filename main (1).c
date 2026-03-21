#include <stdio.h>

int main()
{
    int n,i,j,count=0,prime;
    scanf("%d",&n);
    for(i=2;  count<n;  i++)
    {
        prime=1;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
        {
            prime=0;
            break;
        }
    
}
if(prime==1)
{
    printf("%d ",i);
    count++;
   }
}
    return 0;
}