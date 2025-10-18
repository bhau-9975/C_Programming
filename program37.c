// Display the numbers till the given number (Forward)
#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
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