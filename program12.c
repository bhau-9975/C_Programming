
////////////////////////////////////////////////////////////////////
//
// Q : Accept number from user and check whether it is even or odd
//
////////////////////////////////////////////////////////////////////
/*
    START
        Accept number and store as no
        Divide no by 2 
        If the remainder is 0
            then display as Even
        otherwise 
            display as Odd
    STOP

*/

#include <stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem=0;
    iRem=iNo %2;
    if (iRem == 0)
    {
        printf("%d is an Even number \n", iNo);
    }
    else
    {
        printf("%d is an Odd number \n", iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d", &iValue);
    CheckEvenOdd(iValue);
    return 0;
}