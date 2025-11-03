////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   PrintEvenNumbers
//  Descrption      :   It accepts one number from user and print that number of even numbers on screen
//  Input           :   7
//  Output          :   2   4   6   8   10  12  14
//  Author          :   Bhau Soma Pise
//  Date            :   18-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

void PrintEvenNumbers(int iNo)

{
    int iCnt = 0;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    iCnt = 1;
    int iEven = 2;
    while (iCnt <= iNo)
    {
        printf("%d\t", iEven);
        iEven = iEven + 2; // iEven+=2;
        iCnt++;
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

    PrintEvenNumbers(iValue);

    return 0;
}
