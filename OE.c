#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int even =0;
    int odd =0;
    while (n>0)
    {
        int rem= n % 10;
        if (rem %2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        n= n/10;
    }
    printf("ODD%d\n", odd);
    printf("EVEN%d\n", even);
    
    return 0;
}
