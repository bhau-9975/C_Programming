///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Print the count of all the factors of the number
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountFactors
//  Descrption      :   Counts factors of number
//  Input           :   12  
//  Output          :   5
//  Author          :   Bhau Soma Pise
//  Date            :   26-10-2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountFactors(int iNo)
{

    int iCnt = 0, iFactCount = 0;

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {

        if ((iNo % iCnt) == 0)
        {
           // printf("%d\t", iCnt);
           iFactCount++;
        }
    }

    return iFactCount;
}

// Time Complexity : O(N/2)

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

   iRet= CountFactors(iValue);
   printf("Total factors of %d are : %d", iValue, iRet);

}