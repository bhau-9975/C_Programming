// Devide First number by Second number
// Input : 12   2  Output: true
// Input : 12   3  Output: true
// Input : 12   5  Output: false
// Input : 12   12  Output: true
// Input : 12   7  Output: false
#include <stdio.h>

int main()
{

    int number1 = 0, number2 = 0;

    printf("Enter the first number : \n");

    scanf("%d", &number1);

    printf("Enter the Second number : \n");

    scanf("%d", &number2);

    if ((number1 % number2) == 0)
    {
        printf("%d : is completely devisible by : %d", number1, number2);
    }
    else
    {
        printf("%d : is Not devisible by : %d", number1, number2);
    }
    return 0;
}