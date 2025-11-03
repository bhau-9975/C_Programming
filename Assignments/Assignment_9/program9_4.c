//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program to find odd factorial of a given number
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   OddFactorial
//  Descrption      :   Calculates odd factorial of given number
//  Input           :   5       
//  Output          :   15  (1*3*5)
//  Author          :   Bhau Soma Pise
//  Date            :   19-10-2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if ((iCnt % 2) != 0)
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

    iRet = OddFactorial(iValue);
    printf("Odd factorial of the number is : %d", iRet);
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Performed :
//  Input   :   5     Output  : 15   (5*3*1)
//  Input   :  -5     Output  : 15   (5*3*1)
//  Input   :  10     Output  : 945 (9*7*5*3*1)
//
//////////////////////////////////////////////////////////////////////////////////////////////////
