#include <stdio.h>   // For input output
#include <stdbool.h> // For Bool datatype
// Best code, but not recommended

bool CheckEvenOdd(int iNo)
{
    return ((iNo % 2) == 0);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if (bRet == true)
    {
        printf("%d is Even number", iValue);
    }
    else
    {
        printf("%d is Odd number", iValue);
    }
    return 0;
}
