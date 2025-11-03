
////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//  Fanction Name   :   CheckIfDivisibleBy5OrNot
//  Descrption      :   It is used to check whether the given number is divisible by 5 or not 
//  Input           :   int
//  Output          :   Boolean
//  Author          :   Bhau Soma Pise
//  Date            :   18-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////
bool CheckIfDivisibleBy5OrNot(int iNo)
{
    bool bFlag = false;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    if ((iNo % 5) == 0)
    {
        bFlag = true;
    }

    return bFlag;
}
////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    bRet = CheckIfDivisibleBy5OrNot(iValue);

    if (bRet == true)
    {
        printf("%d is divisible by 5.", iValue);
    }
    else
    {
        printf("%d is not divisible by 5.", iValue);
    }

    return 0;
}