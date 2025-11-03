//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and print first 5 multiples of that number
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Descrption      :   Displays first 5 multiples of number
//  Input           :   4
//  Output          :   4   8   12  16  20
//  Author          :   Bhau Soma Pise
//  Date            :   19-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0, iMul = 0;

    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMul = iCnt * iNo;
        printf("%d\t", iMul);
    }
}

// Time Complexity : O(5)

int main()
{
    int iValue = 0;

    printf("Enter the frequency : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}