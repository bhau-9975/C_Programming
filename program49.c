// Printing the Non factors.... dynamic input and good approach and with updator
#include <stdio.h>

void DisplayNonFactors(int iNo)
{

    int iCnt = 0;

    if (iNo < 0)        // Updator 
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)      // Condition
        {
            printf("%d\n", iCnt);
        }
    }
}

// Time complexity = O(N)

int main()
{

    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    DisplayNonFactors(iValue);

    return 0;
}