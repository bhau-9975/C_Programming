///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts the number from user and display difference between summation of its factors and non-factors
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Example :
//  Input   :   12    Output    :   -34 (16-50)
//  Input   :   10    Output    :   -29 (8-37)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FactDiff
//  Descrption      :   It returns the differemce of the sum of factors and non-factors
//  Input           :   int 
//  Output          :   int
//  Author          :   Bhau Soma Pise
//  Date            :   18-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////
int FactDiff(int iNo)
{
    int iSumFact = 0, iSumNonFact = 0, iDiff = 0, iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0) // Filter for factors
        {
            iSumFact = (iSumFact + iCnt); // Summation of factors
        }
        else
        {
            iSumNonFact = (iSumNonFact + iCnt); // Summation of non-factors
        }
    }

    iDiff=(iSumFact - iSumNonFact);

    return iDiff;
}
// Time Complexity =O(N)

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);
    printf("Difference of summation of factors and non-factors of %d is : %d", iValue, iRet);

    return 0;
}