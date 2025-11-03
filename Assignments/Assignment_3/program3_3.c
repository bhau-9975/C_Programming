////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   PrintEvenNumbers
//  Descrption      :   It accepts one number and print even factors of that numbers Using && Operator
//  Input           :   36
//  Output          :   2   4   6   12  18
//  Author          :   Bhau Soma Pise
//  Date            :   18-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

void PrintEvenFactors(int iNo)

{
    int iCnt = 0;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {

        if ((iNo % iCnt) == 0 && (iCnt % 2) == 0) // Filter for the factors of given number and even factors
        {
            printf("%d\t", iCnt);
        }
    }
}
////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    PrintEvenFactors(iValue);

    return 0;
}
