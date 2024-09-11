#include <stdio.h>

int f_sumDigits(int int_inputValue)
{
    int int_sumDigits = 0;

    while (int_inputValue > 0)
    {
        int_sumDigits = int_sumDigits + int_inputValue % 10;
        int_inputValue = int_inputValue / 10;
    }

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