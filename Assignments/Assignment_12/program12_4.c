///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Print the sum of all the even factors of the number (Exclude the number itself)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   SumOfEvenFactors
//  Descrption      :   Calculates sum of even factors of number
//  Input           :   12  
//  Output          :   12  (2+4+6)
//  Author          :   Bhau Soma Pise
//  Date            :   26-10-2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SumOfEvenFactors(int iNo)
{

    int iCnt = 0, iFactSum = 0;

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {

        if ((iNo % iCnt) == 0 && (iCnt % 2) == 0)
        {
            printf("%d\t", iCnt);
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

    iRet = SumOfEvenFactors(iValue);
    printf("\nSum of even factors of %d is : %d", iValue, iRet);
}