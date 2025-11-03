///////////////////////////////////////////////////////////////////////////////////////
//
//  Check Even or Odd
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckEvenOdd
//  Descrption      :   It returns the non-factors of the number 
//  Input           :   8
//  Output          :   Even
//  Author          :   Bhau Soma Pise
//  Date            :   18-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if ((iNo % 2) == 0)
    {
        printf("%d is an Even number.", iNo);
    }
    else
    {
        printf("%d is Odd number.", iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return 0;
}