////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   PrintEvenNumbers
//  Descrption      :   It prints even factors of that number
//  Input           :   24
//  Output          :   2   4   6   8   12
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

        if ((iNo % iCnt) == 0) // Filter for the factors of given number
        {
            if ((iCnt % 2) == 0) // Filter for even factors only
            {
                printf("%d\t", iCnt);
            }
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
