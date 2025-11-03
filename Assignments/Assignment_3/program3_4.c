///////////////////////////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayConvert
//  Descrption      :   It convert char into the case of that character
//  Input           :   char
//  Output          :   boolean
//  Author          :   Bhau Soma Pise
//  Date            :   18-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

void DisplayConvert(char cChar)
{

    if (cChar >= 'A' && cChar <= 'Z')    // Filter to Check if char is in upper case, then convert it to lower case
    {
        cChar = cChar + 32;

        printf("Converted lower case : %c ",cChar);
    }
    else if (cChar >= 'a' && cChar <= 'z')// Filter to Check if char is in lower case, then convert it to upper case
    {
        cChar = cChar - 32;
        printf("Converted upper case : %c ",cChar);
    }
    else{
        printf("Please enter valid character...! %c is not valid character. ",cChar);
    }
}
///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Test cases handled by the application
//  Example :
//  Input   :   E     Output    :   e  
//  Input   :   D     Output    :   d  
//
///////////////////////////////////////////////////////////////////////////////////////
