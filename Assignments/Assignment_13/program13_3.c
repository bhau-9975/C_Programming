/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Print all odd numbers from 1 to N
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   PrintOddNumbers
//  Descrption      :   Prints odd numbers upto N
//  Input           :   7
//  Output          :   1   3   5   7
//  Author          :   Bhau Soma Pise
//  Date            :   26-10-2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void PrintOddNumbers(int iLimit)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iLimit; iCnt++)
    {
        if ((iCnt % 2) != 0)        // Filter for odd numbers
            printf("%d\t", iCnt);
    }
}
// Time Complexity : O(N)
int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    PrintOddNumbers(iValue);
}