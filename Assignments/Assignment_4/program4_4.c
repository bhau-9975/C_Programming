///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts the number from user and display summation of its non-factors
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Example :
//  Input   :   12    Output    :   50 (5+7+8+9+10+11)
//  Input   :   10    Output    :   37 (3+4+6+7+8+9)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   SumFactor
//  Descrption      :   It returns the sum of non-factors of the number 
//  Input           :   int
//  Output          :   int
//  Author          :   Bhau Soma Pise
//  Date            :   18-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

int SumFactor(int iNo)
{
    int iSum = 0, iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }



    for (iCnt = 2; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)       // Filter for factors
        {
            //iSum = (iSum + iCnt);    // Addidtion of that factors
            // Or
             iSum+=iCnt;
        }
    }

    return iSum;
}
// Time Complexity =O(N)


int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet=SumFactor(iValue);
    printf("Summation of non-factors of %d is : %d",iValue,iRet);

    return 0;
}