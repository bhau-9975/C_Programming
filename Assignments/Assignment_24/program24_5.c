// Accept N numbers from user and display the summation of digits of each numbers

#include <stdio.h>

#include <stdlib.h>

void SummationOfEachDigit(int Arr[], int iLength)
{

    int iCnt = 0, iTemp = 0, iDigit = 0, iSum = 0;
    printf("The summation of each digits are : ");

    for (iCnt = 1; iCnt <= iLength; iCnt++)
    {
        iSum = 0;
        iTemp = Arr[iCnt];
        while (iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            iTemp = iTemp / 10;
        }

        printf("%d\t", iSum);
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

    SummationOfEachDigit(p, iSize);

    free(p);
    return 0;
}