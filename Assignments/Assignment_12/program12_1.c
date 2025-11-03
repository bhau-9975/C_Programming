///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Print all the factors of the number
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayFactors
//  Descrption      :   Displays factors of number
//  Input           :   12  
//  Output          :   1   2   3   4   6
//  Author          :   Bhau Soma Pise
//  Date            :   26-10-2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{

    int iCnt = 0;

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {

        if ((iNo % iCnt) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

// Time Complexity : O(N/2)

int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);


    DisplayFactors(iValue);
}