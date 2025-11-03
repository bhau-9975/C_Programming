////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and return the difference between summation of even digits and summation odd digits
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DiffSumOfEvenOdd
//  Descrption      :   Displays the difference between summation of even digits and summation of odd digits
//  Input           :   2395
//  Output          :   -2 (2-(3+9+5))
//  Author          :   Bhau Soma Pise
//  Date            :   28-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int DiffSumOfEvenOdd(int iNo)
{
    int iDigit = 0, iSumEven = 0, iSumOdd = 0;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if ((iDigit % 2) == 0) // Here we are neglecting zero
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }

        iNo = iNo / 10;
    }

    return (iSumEven - iSumOdd);
}
// Time Complexity : O(d)    here d is number of digits

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = DiffSumOfEvenOdd(iValue);
    printf("Difference in sum of even and odd digits is : %d", iRet);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input : 2395     Output  :   -2 (2-(3+9+5))
//  Input : 1018     Output  :    6 (8-(1+1))
//  Input : 9440     Output  :   -1 ((4+4)-9)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
