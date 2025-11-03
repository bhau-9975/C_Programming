///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Check if the number is divisible by 5
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   IsDivisibleByFive
//  Descrption      :   Checks if number is divisible by 5 or not
//  Input           :   12  
//  Output          :   false
//  Author          :   Bhau Soma Pise
//  Date            :   26-10-2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

bool IsDivisibleByFive(int iNo)
{
    bool bFlag = false;

    if ((iNo % 5) == 0)
    {
        bFlag = true;
    }

    return bFlag;
}

// Time Complexity : O(N/2)

int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    printf("%s\n", IsDivisibleByFive(iValue) ? "Yes" : "No");
}