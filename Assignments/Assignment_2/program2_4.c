////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//  Fanction Name   :   Display
//  Descrption      :   It accept two numbers from user and dipslay first number in second number of times.
//  Input           :   3   5
//  Output          :   3   3   3   3   3
//  Author          :   Bhau Soma Pise
//  Date            :   18-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////
void Display(int iNo, int iFrequency)

{
    int iCnt = 0;

    if (iFrequency < 0) // Updator for frequency
    {
        iFrequency = -iFrequency;
    }

    for (iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
}
////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue = 0, iCount = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    printf("Enter the frequency : ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}
