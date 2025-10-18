
////////////////////////////////////////////////////////////////////
//
// Q : Accept number from user and check whether it is even or odd
//
////////////////////////////////////////////////////////////////////

// It is the best readable code

#include <stdio.h>   // It is for an Input Output files
#include <stdbool.h> // It is for bool Datatype

bool CheckEvenOdd(int iNo)
{
    
    if (iNo % 2 == 0)
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
    printf("Enter the number : ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if (bRet == true)
    {
        printf("%d is an Even number...! \n", iValue);
    }
    else
    {
        printf("%d is an Odd number...! \n", iValue);
    }

    return 0;
}