#include <stdio.h>

int f_sumDigits(int int_inputValue)
{
    int int_sumDigits = 0;
    printf("\n");

    while (int_inputValue > 0)
    {
        printf("%d -> %d + %d", int_inputValue, int_inputValue % 10, int_sumDigits);
        int_sumDigits = int_sumDigits + int_inputValue % 10;
        int_inputValue = int_inputValue / 10;
        printf(" -> %d \n", int_sumDigits);
    }

    printf("\n");
    return int_sumDigits;
}

int main()
{
    int int_readValue = 0;
    printf("Enter a number: ");
    scanf("%d", &int_readValue);
    int_readValue = f_sumDigits(int_readValue);

    printf("The sum of the digits: %d\n", int_readValue);
    return 0;
}