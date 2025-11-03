/////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckVowel
//  Descrption      :   It checks that character is Vowel or not
//  Input           :   char
//  Output          :   boolean
//  Author          :   Bhau Soma Pise
//  Date            :   18-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

bool CheckVowel(char cChar)
{
    bool bFlag = false;

    if ((cChar >= 'A') && (cChar <= 'Z'))   // // Filter to check character and convert it to lower case
    {
        cChar = cChar + 32;
    }
    
    if (cChar == 'a' || cChar == 'e' || cChar == 'i' || cChar == 'o' || cChar == 'u')
    {
        bFlag = true;
    }
    else
    {
        bFlag = false;
    }

    return bFlag;
}
////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    bool bRet = false;
    printf("Enter the character : ");
    scanf("%c", &cValue);

    bRet = CheckVowel(cValue);

    if (bRet == true)
    {
        printf("It is an Vowel.");
    }
    else
    {
        printf("It is not Vowel.");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Test cases handled by the application
//  Example :
//  Input   :   i     Output    :   TRUE  
//  Input   :   F     Output    :   FALSE 
//
///////////////////////////////////////////////////////////////////////////////////////
