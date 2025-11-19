// Accept N numbers from user and accept range, and display all elements from that range

#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iLength)
{

    int iCnt = 0, iProd = 1;

    for (iCnt = 1; iCnt <= iLength; iCnt++)
    {
        iProd = iProd * Arr[iCnt];
    }

    return iProd;
}

int main()
{

    int iCnt = 0, iSize = 0, iRet = 0;

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

    iRet = Product(p, iSize);
    printf("Product of all the elemenmts is : %d", iRet);
}
