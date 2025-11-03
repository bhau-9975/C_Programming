///////////////////////////////////////////////////////////////////////////////////////
//
//  Check Positive, Negative or Zero
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckNumber
//  Descrption      :   Checks number (Positive or Negative or Zero)
//  Input           :   7                           -3                      0
//  Output          :   The number is positive      The number Negative     The number is Zero
//  Author          :   Bhau Soma Pise
//  Date            :   18-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

void CheckNumber(int iNo)
{

    if (iNo > 0)
    {
        printf("The number is Positive.");
    }
    else if (iNo==0)
    {
        printf("The number is Zero.");
    }
    else
    {
        printf("The number is Negative.");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter first number : ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return 0;
}