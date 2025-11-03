/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Print sum of first N natural numbers.
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   PrintSumNaturalNumbers
//  Descrption      :   Prints sum of numbers upto N
//  Input           :   7
//  Output          :   28  (1+2+3+4+5+6+7)
//  Author          :   Bhau Soma Pise
//  Date            :   26-10-2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int SumNaturalNumbers(int iLimit)
{
    int iCnt = 0, iSum = 0;

    for (iCnt = 1; iCnt <= iLimit; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}
// here we can use also formula directly instead of loop

//Sum of N natural numbers is : (N*(N+1))/2

// Time Complexity : O(N)
int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    printf("Sum of first %d natural numbers is : %d\n",iValue, SumNaturalNumbers(iValue));
}