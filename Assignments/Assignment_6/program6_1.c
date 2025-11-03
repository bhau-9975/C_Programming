///////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts the name from user and print that name.
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    char Name[30];
    printf("Enter the name : ");
    //scanf("%29s", Name);  // It accepts only one word
    fgets(Name, sizeof(Name),stdin); // Accepts fullname with spaces

    printf("Your name is %s", Name); 

    return 0;
}