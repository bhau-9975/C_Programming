//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and return the count of digits between 3 and 7
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountOfDigits
//  Descrption      :   Checks the count of even digits of number between 3 and 8
//  Input           :   2395
//  Output          :   1   (Excluding the starting and ending point)
//  Author          :   Bhau Soma Pise
//  Date            :   28-10-2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int CountOfDigitsBetRange(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit > 3 && iDigit < 7) // Here we can specify the range from user
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
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    // here we can take the range from user also
    iRet = CountOfDigitsBetRange(iValue);
    printf("Count of digits between 3 and 7 is : %d", iRet);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input : 2395     Output  :   1
//  Input : 1018     Output  :   0
//  Input : 4521     Output  :   2
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
