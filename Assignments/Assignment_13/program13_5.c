/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Print sum of first N natural numbers.
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   SumEvenNumbers
//  Descrption      :   Prints sum of even numbers upto N
//  Input           :   7
//  Output          :   12  (2+4+6)
//  Author          :   Bhau Soma Pise
//  Date            :   26-10-2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int SumEvenNumbers(int iLimit)
{
    int iCnt = 0, iSum = 0;

    for (iCnt = 1; iCnt <= iLimit; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
// Time Complexity : O(N)
int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    printf("Sum of first %d even natural numbers is : %d\n", iValue, SumEvenNumbers(iValue));
}