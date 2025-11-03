//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and return the multiplication of all digits
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Note : Here if there is zero in number, then the multiplication will be zero (eg: 9*4*4*0 is 0)
//       : So here we are not considering 0, we are multiplying digits by neglecting zero
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   MultiplicationOfDigits
//  Descrption      :   Multiplies all the digits of number
//  Input           :   2395
//  Output          :   270   (Excluding the starting and ending point)
//  Author          :   Bhau Soma Pise
//  Date            :   28-10-2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int MultiplicationOfDigits(int iNo)
{
    int iDigit = 0, iMult = 1;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit != 0)  // Here we are neglecting zero
        {
            iMult = iMult * iDigit;
        }

        iNo = iNo / 10;
    }

    return iMult;
}
// Time Complexity : O(d)    here d is number of digits

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet=MultiplicationOfDigits(iValue);
    printf("Multiplication of all digits is : %d", iRet);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases:
//  Input : 2395     Output  :   270
//  Input : 1018     Output  :   8
//  Input : 9440     Output  :   144
//
//////////////////////////////////////////////////////////////////////////////////////////////////////