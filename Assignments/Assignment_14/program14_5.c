//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and count frequency of digits which are less than 6
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
//  take variable as long long int for number greater than : 214748347 
///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckFrequencyLessThanSix
//  Descrption      :   Checks the count of digits of number contains less than six
//  Input           :   2395
//  Output          :   3
//  Author          :   Bhau Soma Pise
//  Date            :   27-10-2025
//
///////////////////////////////////////////////////////////////////////////////////////////////


int CountFrequncyLessThanSix(int iNo)
{
    int iDigit = 0, iFrequency = 0;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit < 6)
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

    printf("Frequency of 4 is : %d", CountFrequncyLessThanSix(iValue));
}
///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases  :
//  Input : 2395     Output  :   3
//  Input : 7395     Output  :   1
//  Input : 7989     Output  :   0
//
///////////////////////////////////////////////////////////////////////////////////////////////
