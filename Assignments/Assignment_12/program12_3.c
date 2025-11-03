///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Print sum of all the factors of the number
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   SumOfFactors
//  Descrption      :   Calculates sum of factors of number
//  Input           :   12  
//  Output          :   16  (1+2+3+4+6)
//  Author          :   Bhau Soma Pise
//  Date            :   26-10-2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SumOfFactors(int iNo)
{

    int iCnt = 0, iFactSum = 0;

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {

        if ((iNo % iCnt) == 0)
        {
            // printf("%d\t", iCnt);
            // iFactCount++;
            iFactSum = iFactSum + iCnt;
        }
    }

    return iFactSum;
}

// Time Complexity : O(N/2)

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = SumOfFactors(iValue);
    printf("Sum of factors of %d is : %d", iValue, iRet);
}