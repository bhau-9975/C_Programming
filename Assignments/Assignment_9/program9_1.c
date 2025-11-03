//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts the number from user and display below pattern
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Descrption      :   Displays pattern
//  Input           :   2          
//  Output          :   *   *   #   # 
//  Author          :   Bhau Soma Pise
//  Date            :   19-10-2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }
    for (iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        if (iCnt < 0)
        {
            printf("*\t");      // Print * if iCnt is less than 0
        }
        if (iCnt > 0)           // No condition when iCnt == 0
        {
            printf("#\t");      // Print # if iCnt is greater than 0
        }
    }
}

// Time complexity : O(2N)

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test cases :
//  Input   :   5     Output  : *   *   *   *   *   #   #   #   #   #
//  Input   :  -5     Output  : *   *   *   *   *   #   #   #   #   #
//  Input   :   4     Output  : *   *   *   *   #   #   #   #
//  Input   :   2     Output  : *   *   #   #
//
//////////////////////////////////////////////////////////////////////////////////////////////////
