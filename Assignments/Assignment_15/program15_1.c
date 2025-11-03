//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and return the count of even digits
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountOfEvenDigits
//  Descrption      :   Checks the count of even digits of number
//  Input           :   2395
//  Output          :   1
//  Author          :   Bhau Soma Pise
//  Date            :   28-10-2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int CountOfEvenDigits(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if ((iDigit%2)==0)
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

    printf("Count of even digits is : %d", CountOfEvenDigits(iValue));
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test cases  :
//  Input : 2395     Output  :   1
//  Input : 7395     Output  :   0
//  Input : 72989    Output  :   2
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
