// Devide First number by Second number and checking if divisible or not
// Input : 12   2  Output: true
// Input : 12   3  Output: true
// Input : 12   5  Output: false
// Input : 12   12  Output: true
// Input : 12   7  Output: false
#include <stdio.h>
#include <stdbool.h>

bool CheckDivisible(int iNo1, int iNo2)
{

    if ((iNo1 % iNo2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int number1 = 0, number2 = 0;

    printf("Enter the first number : \n");

    scanf("%d", &number1);

    printf("Enter the Second number : \n");

    scanf("%d", &number2);

    bool bRet = false;

    bRet = CheckDivisible(number1, number2);

    if (bRet == true)
    {
        printf("%d : is completely divisible by : %d", number1, number2);
    }
    else
    {
        printf("%d : is Not divisible by : %d", number1, number2);
    }
    return 0;
}