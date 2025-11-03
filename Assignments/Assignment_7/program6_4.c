//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts three numbers from user and print their multiplication.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckGreater
//  Descrption      :   Returns multiplication of three numbers
//  Input           :   7   3   5           
//  Output          :   105
//  Author          :   Bhau Soma Pise
//  Date            :   19-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 0;
    iMult = (iNo1 * iNo2 * iNo3);
    return iMult;

    // Or we can write directly like below instead of above three lines

    return (iNo1 * iNo2 * iNo3);
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Enter first number : ");
    scanf("%d", &iValue1);

    printf("Enter second number : ");
    scanf("%d", &iValue2);

    printf("Enter second number : ");
    scanf("%d", &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is : %d", iRet);

    return 0;
}