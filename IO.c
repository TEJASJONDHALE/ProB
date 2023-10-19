#include<stdio.h>
int main()
{
    int sumodd=0;
    int sumeven=0;
    int upperbound;
    int absdiff;
    printf("enter the upper bound:");
    scanf("%d",&upperbound);
    for(int number=1;number<=upperbound;++number)
    if(number%2==0)
    {
        sumeven+=number;
    }
    else
    {
        sumodd+=number;
    }
    absdiff=(sumodd>sumeven)?(sumodd-sumeven):(sumeven-sumodd);
    printf("the sumodd is %d.\n",sumodd);
    printf("the sumeven is %d.\n",sumeven);
    printf("the absdiff is %d.\n",absdiff);
    return 0;
}
