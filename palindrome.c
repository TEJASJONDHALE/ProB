#include <stdio.h>
int main()
{
    int n, rev=0, rem, org;
    scanf("%d", &n);
    org=n;
    while (n != 0)
    {
        rem = n%10;
        rev= rev*10+rem;
        n/= 10;
    }
    if (org== rev)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
    return 0;
}
