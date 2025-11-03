//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and return the count of odd digits
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountOfOddDigits
//  Descrption      :   Checks the count of even digits of number
//  Input           :   2395
//  Output          :   3
//  Author          :   Bhau Soma Pise
//  Date            :   28-10-2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int CountOfOddDigits(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if ((iDigit%2)!=0)
        {
            iCount++;
        }
        
        iNo = iNo / 10;
    }

    return iCount;
}
// Time Complexity : O(d)    here d is number of digits

int main()
{
     int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    printf("Count of even digits is : %d", CountOfOddDigits(iValue));
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test cases:
//  Input : 2395     Output  :   3
//  Input : 7395     Output  :   4
//  Input : 7289     Output  :   2
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
