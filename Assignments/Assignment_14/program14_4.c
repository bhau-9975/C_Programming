///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and count frequency of 4 in it
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
//  take variable as long long int for number greater than : 214748347 
///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckFrequencyOfFour
//  Descrption      :   Checks frequency of four if digits of number contains 
//  Input           :   2395
//  Output          :   0
//  Author          :   Bhau Soma Pise
//  Date            :   27-10-2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int CountFrequncyOfFour(int iNo)
{
    int iDigit = 0, iFrequency = 0;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 4)
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

    printf("Frequency of 4 is : %d", CountFrequncyOfFour(iValue));
}
///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases:
//  Input : 2395     Output  :   1
//  Input : 7395     Output  :   0
//  Input : 739252   Output  :   2
//
///////////////////////////////////////////////////////////////////////////////////////////////
