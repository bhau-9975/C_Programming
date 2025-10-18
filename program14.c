
////////////////////////////////////////////////////////////////////
//
// Q : Accept number from user and check whether it is even or odd
//
////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h> // It is for bool Datatype

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;
    if (iRem == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter the number : \n");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if (bRet == true)
    {
        printf("%d is an Even number... \n", iValue);
    }
    else
    {
        printf("%d is an Odd number... \n", iValue);
    }

    return 0;
}