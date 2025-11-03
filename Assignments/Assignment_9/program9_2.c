//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept the amount in US dollar and return its currosponding value in Indian Rupee
//  Consider 1$ = 70 INR
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DollarToINR
//  Descrption      :   Converts dollars into INR
//  Input           :   10        
//  Output          :   700
//  Author          :   Bhau Soma Pise
//  Date            :   19-10-2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int DollarToINR(int iAmount)
{
    // int iINR = 0, iDollar = 0;


    // iDollar = 70; // Given value of dollar

    // iINR = iAmount * iDollar;

    // return iINR;

    // Here we can directly return like below instead of all above code
     return (iAmount*70);
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the amount in USD : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);
    printf("Amount in Indian Rupees is : %d", iRet);
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases :
//  Input   :   10     Output  : 700
//  Input   :    3     Output  : 210
//  Input   : 1200     Output  : 84000
//
//////////////////////////////////////////////////////////////////////////////////////////////////
