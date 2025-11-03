////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//  Fanction Name   :   Display
//  Descrption      :   It accepts the number from user and check whether the number is even or odd.
//  Input           :   int
//  Output          :   Boolean
//  Author          :   Bhau Soma Pise
//  Date            :   18-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)

{
    bool bFlag = false;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if ((iNo % 2) == 0)
    {
        bFlag = true;
    }

    // else
    // {
    //     bFlag = false;
    // }

    return bFlag;
}
////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if (bRet == true)
    {
        printf("%d is an even number.", iValue);
    }
    else
    {
        printf("%d is an odd number.", iValue);
    }

    return 0;
}
