////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
//  Fanction Name   :   Division of two numbers
//  Descrption      :   It is used to perform division of two numbers  
//  Input           :   FLOAT, FLOAT
//  Output          :   FLOAT
//  Author          :   Bhau Soma Pise
//  Date            :   18-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

// Note : Any number divide by zero  ((11/0)= infinity) is not acceptable and will throw an error
//        Zero divide by any number ((0/11)=0) the answer will be zero, no error will occure

float Divide(float iNo1, float iNo2)
{

    if (iNo2 == 0)          // Warning, if user enters second number as zero 
    {
        printf("Warning...!!! Please compile the code again and rewrite the second number as non-zero...! ");
    }

    if (iNo1 < 0)           // Updator for first number
    {
        iNo1 = -iNo1;
    }
    if (iNo2 < 0)           // Updator for second number
    {
        iNo2 = -iNo2;
    }

    float fAns = 0.0f;

    fAns = (iNo1 / iNo2);

    return fAns;
}
////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
////////////////////////////////////////////////////////////////////////////////////////
int main()
{

    float iValue1 = 0.0f, iValue2 = 0.0f, fRet = 0.0f;

    printf("Enter the first number : ");
    scanf("%f", &iValue1);

    printf("Enter the second number : ");
    scanf("%f", &iValue2);

    
    fRet = Divide(iValue1, iValue2);

    printf("The division of two numbers is : %f", fRet);

    return 0;
}
