// Accept N number from user and display such elements which are divisible by 5

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{

    int iCnt = 0;
    printf("The elements divisible by 5 are : \n");

    for (iCnt = 1; iCnt <= iLength; iCnt++)
    {
        if ((Arr[iCnt] % 5) == 0)
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

    Display(p, iSize);

    free(p);
    return 0;
}