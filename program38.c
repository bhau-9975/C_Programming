// Display the numbers till the given number  (Reverse order)
#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{

    int number = 0;
    printf("Enter the number : ");    //Dynamic input
    scanf("%d", &number);

    Display(number);
    return 0;
}