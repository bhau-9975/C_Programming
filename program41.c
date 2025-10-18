// Display the even numbers till the given number 
#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 2; iCnt <= iNo; iCnt+=2) // using Short hand operator
    {
        printf("%d\t", iCnt);
    }
}

// Time complexity =O(n/2)

int main()
{

    int number = 0;
    printf("Enter the number : ");    //Dynamic input
    scanf("%d", &number);

    Display(number);
    return 0;
}