#include <stdio.h>
#include<math.h>

int main() {
    int n;
    int sum;
    scanf("%d", &n);
 sum = sqrt(n);
    
    if(n > 0 && sum*sum == n)
    {
        printf("Perfect Square");
    }
    else if (n > 0 && sum*sum != n)
    {
        printf("Not Perfect Square");
    }
    else
    {
       printf("Invalid"); 
    }
    return 0;
}