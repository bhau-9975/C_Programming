//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program to print the table of given number in reverse
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Table
//  Descrption      :   Print reverse table of number
//  Input           :   5            
//  Output          :   50  45  40  35  30  25  20  15  10  5  
//  Author          :   Bhau Soma Pise
//  Date            :   19-10-2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////

void ReverseTable(int iNo)
{
    int iCnt = 0, iTab = 0;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }
    for (iCnt = 10; iCnt >= 1; iCnt--)
    {
        iTab = iNo * iCnt;
        printf("%d\t", iTab);
    }
}

// Time complexity : O(10)

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    ReverseTable(iValue);
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases :
//  Input   :   5     Output  : 50  45  40  35  30  25  20  15  10  5
//  Input   :  -5     Output  : 50  45  40  35  30  25  20  15  10  5
//  Input   :   4     Output  : 40  36  32  28  24  20  16  12  8   4
//
//////////////////////////////////////////////////////////////////////////////////////////////////
