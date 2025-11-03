///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts the number from user and display its all non-factors
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Example :
//  Input   :   12    Output    :   5   7   8   9   10  11
//  Input   :   11    Output    :   2   3   4   5   6   7   8   9   10  
//  Input   :   10    Output    :   3   4   6   7   8   9
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   NonFactor
//  Descrption      :   It returns the non-factors of the number 
//  Input           :   8
//  Output          :   3   5   6   7
//  Author          :   Bhau Soma Pise
//  Date            :   18-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

void NonFactor(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0) // Filter for non-factors
        {
            printf("%d\t", iCnt);
        }
    }
}
// Time Complexity =O(N)

int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    NonFactor(iValue);

    return 0;
}