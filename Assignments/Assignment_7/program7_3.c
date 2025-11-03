//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and print its numbers line
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Descrption      :   Displays number line of number
//  Input           :   4
//  Output          :  -4  -3  -2  -1  0   1   2   3   4
//  Author          :   Bhau Soma Pise
//  Date            :   19-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

// Time Complexity : O(2N)

int main()
{
    int iValue = 0;

    printf("Enter the frequency : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}