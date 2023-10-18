#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, rem=0, sum=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0)
    {
        rem++;
        temp /= 10;
    }
    temp = num;

    while (temp > 0)
    {
        sum += pow(temp % 10, rem);
        temp /= 10;
    }

    if (sum == num)
    {
        printf("%d is an Armstrong number\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}
