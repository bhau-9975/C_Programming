//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts two numbers from user and check whether that numbers are equal or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckNumber
//  Descrption      :   Checks two numbers are equal or not
//  Input           :   7   8
//  Output          :   false
//  Author          :   Bhau Soma Pise
//  Date            :   19-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

bool CheckEqual(int iNo1, int iNo2)
{
    bool bFlag = false;

    if (iNo1 == iNo2)
    {
        bFlag = true;
    }

    return bFlag;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter first number : ");
    scanf("%d", &iValue1);

    printf("Enter second number : ");
    scanf("%d", &iValue2);

    bRet = CheckEqual(iValue1, iValue2);

    if (bRet == true)
    {
        printf("Numbers are equal.");
    }
    else
    {
        printf("Numbers are not equal.");
    }

    return 0;
}