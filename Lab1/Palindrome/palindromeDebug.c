#include <stdio.h>

int f_turn(int int_inputValue)
{
    unsigned int int_result = 0;
    unsigned int degug_inputValue = int_inputValue;
    while (int_inputValue > 0)
    {
        int_result = int_result * 10 + int_inputValue % 10;
        int_inputValue = int_inputValue / 10;
    }
    printf ("f %d -> %d \n", degug_inputValue, int_result);
    return int_result;
}

int main()
{
    unsigned int int_readValue;
    printf("\nEnter a number: ");
    scanf("%d", &int_readValue);
    printf("\n");
    unsigned int int_reverseValue = f_turn(int_readValue);

    while (int_readValue != int_reverseValue)
    {
        printf("s %d + %d ->", int_readValue, int_reverseValue);
        int_readValue = int_readValue + int_reverseValue;
        printf(" %d \n", int_readValue);
        int_reverseValue = f_turn(int_readValue);
    }

    printf("\nPalindrome: %d \n", int_readValue);
    return 0;
}