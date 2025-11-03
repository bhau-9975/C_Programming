///////////////////////////////////////////////////////////////////////////////////////
//
//  Check leap year
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckLeapYear
//  Descrption      :   Checks leap year or not 
//  Input           :   2024
//  Output          :   The 2024 is leap year
//  Author          :   Bhau Soma Pise
//  Date            :   18-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iYr)
{

    if ((iYr % 400) == 0 || (iYr % 4) == 0   &&   (iYr % 100) != 0)
    {
        printf("The %d is a leap year.", iYr);
    }
    
    else
    {
         printf("The %d is not a leap year.", iYr);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the year : ");
    scanf("%d", &iValue);

    CheckLeapYear(iValue);

    return 0;
}