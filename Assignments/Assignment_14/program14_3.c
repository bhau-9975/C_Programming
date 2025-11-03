///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and count frequency of 2 in it
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckFrequencyOfTwo
//  Descrption      :   Checks frequency of two if digits of number contains 
//  Input           :   2395
//  Output          :   1
//  Author          :   Bhau Soma Pise
//  Date            :   27-10-2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int CountFrequncyOfTwo(int iNo)
{
    int iDigit = 0, iFrequency = 0;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 2)
        {
            iFrequency++;
        }

        iNo = iNo / 10;
    }

    return iFrequency;
}
// Time Complexity : O(d)    here d is number of digits

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    printf("Frequency of 2 is : %d", CountFrequncyOfTwo(iValue));
}
///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases:
//  Input : 2395     Output  :   1
//  Input : 7395     Output  :   0
//  Input : 739252   Output  :   2
//
///////////////////////////////////////////////////////////////////////////////////////////////
