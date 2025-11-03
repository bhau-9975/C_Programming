///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and check whether it contains zero in it or not
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckZero
//  Descrption      :   Checks if digits of number contains zero or not
//  Input           :   2395
//  Output          :   false
//  Author          :   Bhau Soma Pise
//  Date            :   27-10-2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckZero(int iNo)
{
    int iDigit = 0;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            return TRUE;
        }

        iNo = iNo / 10;
    }
    return FALSE;
}
// Time Complexity : O(d)    here d is number of digits

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    bRet = CheckZero(iValue);
    if (bRet == TRUE)
    {
        printf("%d contains Zero.", iValue);
    }
    else
    {
        printf("%d does not contains Zero.", iValue);
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases  :
//  Input : 2395    Output  :   There is no zero
//  Input : 2305    Output  :   It contains zero
//
///////////////////////////////////////////////////////////////////////////////////////////////
