//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program to find even factorial of a given number
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   EvenFactorial
//  Descrption      :   Calculates even factorial of given number
//  Input           :   5       
//  Output          :   8   (2*4)
//  Author          :   Bhau Soma Pise
//  Date            :   19-10-2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if ((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

// Time complexity : O(N)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);
    printf("Even factorial of the number is : %d", iRet);
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//  Test Cases :
//  Input   :   5     Output  : 8   (4*2)
//  Input   :  -5     Output  : 8   (4*2)
//  Input   :  10     Output  : 3840 (10*8*6*4*2)
//
//////////////////////////////////////////////////////////////////////////////////////////////////
