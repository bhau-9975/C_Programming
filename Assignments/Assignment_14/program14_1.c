///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and display its digits in reverse
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayReverseDigit
//  Descrption      :   Prints digits of number in reverse
//  Input           :   2395
//  Output          :   5   9   3   2
//  Author          :   Bhau Soma Pise
//  Date            :   27-10-2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayReverseDigit(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)        // Updator
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\t", iDigit);
        iNo = iNo / 10;
    }
}
// Time Complexity : O(d)    here d is number of digits

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    DisplayReverseDigit(iValue);
}