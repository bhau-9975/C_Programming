//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts the number from user and check whether that number is greater than 100 or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckGreater
//  Descrption      :   Checks number (is greater than 100 or not)
//  Input           :   7              
//  Output          :   False
//  Author          :   Bhau Soma Pise
//  Date            :   19-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

bool CheckGreater(int iNo)
{
    bool bFlag = false;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo > 100)
    {
        bFlag = true;
    }
    
    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    bRet = CheckGreater(iValue);

    if (bRet == true)
    {
        printf("%d is Greater than 100.", iValue);
    }
    else
    {
        printf("%d is Smaller than 100.", iValue);
    }

    return 0;
}