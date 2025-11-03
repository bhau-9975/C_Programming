///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts the number from user and display its factors in decreasing order
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Example :
//  Input   :   12    Output    :   6   4   3   2   1
//  Input   :   17    Output    :   1
//  Input   :   10    Output    :   5   2   1
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   RevFactor
//  Descrption      :   It returns the factors of the number in reverse order
//  Input           :   8
//  Output          :   4   2   1
//  Author          :   Bhau Soma Pise
//  Date            :   18-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

void RevFactor(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = (iNo / 2); iCnt >= 1; iCnt--)
    {
        if ((iNo % iCnt) == 0) // Filter for factors
        {
            printf("%d\t", iCnt);
        }
    }
}

// Time Complexity =O(N/2)


int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    RevFactor(iValue);

    return 0;
}