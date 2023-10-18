#include <stdio.h>
int main()
{
    int sumOdd = 0;
    int sumEven = 0;
    int upperbound;
    int absDiff;
    int number;

    printf("Enter the upperbound");
    scanf("%d", &upperbound);

    while (number <= upperbound)
    {
        if (number % 2 == 0)
        {
            sumEven += number;
        }
        else
        {
            sumOdd += number;
        }
        ++number;
    }
    if (sumOdd == sumEven)
    {
        absDiff = sumEven - sumOdd;
    }

    printf("The sum of Even numbers is %d.\n", sumEven);
    printf("The sum of Odd numbers is %d.\n", sumOdd);
    printf("The absolute difference is %d.\n", absDiff);

    return 0;
}
