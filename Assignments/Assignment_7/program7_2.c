//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and print numbers till that number
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Descrption      :   Displays 1 to N
//  Input           :   8
//  Output          :   1   2   3   4   5   6   7   8
//  Author          :   Bhau Soma Pise
//  Date            :   19-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

// Time Complexity : O(N)

int main()
{
    int iValue = 0;

    printf("Enter the frequency : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}