///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts the number from user and display multiplication of its factors
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Example :
//  Input   :   12    Output    :   144 (1*2*3*4*6)
//  Input   :   17    Output    :   1   (1)
//  Input   :   10    Output    :   10  (1*2*5)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   MultFactor
//  Descrption      :   It returns the multiplication of the factors of the number
//  Input           :   int
//  Output          :   int
//  Author          :   Bhau Soma Pise
//  Date            :   18-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////
int MultFactor(int iNo)
{
    int iMult = 0, iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iMult = 1;   // Multiplication can not be zero

    for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)       // Filter for factors
        {
            iMult = (iMult * iCnt);    // Multiplication of that factors
        }
    }

    return iMult;
}
// Time Complexity =O(N/2)


int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet=MultFactor(iValue);
    printf("Multiplication of factors of %d is : %d",iValue,iRet);

    return 0;
}