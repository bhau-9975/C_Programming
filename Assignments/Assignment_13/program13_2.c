/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Print all even numbers from 1 to N
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   PrintEvenNumbers
//  Descrption      :   Prints all even numbers upto N
//  Input           :   7
//  Output          :   2   4   6 
//  Author          :   Bhau Soma Pise
//  Date            :   26-10-2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void PrintEvenNumbers(int iLimit)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iLimit; iCnt++)
    {
        if ((iCnt % 2) == 0) // Filter for even numbers
            printf("%d\t", iCnt);
    }
}
// Time Complexity : O(N)
int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    PrintEvenNumbers(iValue);
}