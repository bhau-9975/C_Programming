// Accept N numbers from user and display all such numbers which contains 3 digits in it.

#include <stdio.h>

#include <stdlib.h>

void DisplayThreeDigitNumbers(int Arr[], int iLength)
{

    int iCnt = 0, iTemp = 0, iDigit = 0, iCount = 0;
    printf("The numbers with 3 digits are : ");

    for (iCnt = 1; iCnt <= iLength; iCnt++)
    {
        iCount = 0;
        iTemp = Arr[iCnt];
        while (iTemp != 0)
        {
            iDigit = iTemp % 10;
            iCount++;
            iTemp = iTemp / 10;
        }
        if (iCount == 3)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{

    int iCnt = 0, iSize = 0;

    int *p = NULL;

    printf("Enter the number of elements : ");

    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate the memory.");
        return -1;
    }

    printf("Enter the elements : \n");
    for (iCnt = 1; iCnt <= iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    DisplayThreeDigitNumbers(p, iSize);

    free(p);
    return 0;
}