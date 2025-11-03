///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept the number from user and calculate the difference between even and odd factorial
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FactorialDifference
//  Descrption      :   Calculates the difference between even and odd factorial
//  Input           :   5       
//  Output          :   -7  ((2*4)-(1*3*5))
//  Author          :   Bhau Soma Pise
//  Date            :   19-10-2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int FactorialDifference(int iNo)
{
    int iCnt = 0, iEvenFact = 1, iOddFact = 1, iDifference = 0;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if ((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;       // Even Factorial
        }
        else
        {
            iOddFact = iOddFact * iCnt;         // Odd Factorial
        }
    }

    iDifference = iEvenFact - iOddFact;  // Calculate difference
    return iDifference;
}

// Time complexity : O(N)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = FactorialDifference(iValue);
    printf("Difference between even factorial and odd factorial of the number is : %d", iRet);
    return 0;
}