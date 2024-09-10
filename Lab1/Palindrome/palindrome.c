#include <stdio.h>

int f_turn(int int_inputValue)
{
    unsigned int int_result = 0;
    while (int_inputValue > 0)
    {
        int_result = int_result * 10 + int_inputValue % 10;
        int_inputValue = int_inputValue / 10;
    }
    return int_result;
}

int main()
{
    unsigned int int_inputValue;
    printf("Enter a number: ");
    scanf("%d", &int_inputValue);
    unsigned int int_reverseValue = f_turn(int_inputValue);

    while (int_inputValue != int_reverseValue)
    {
        int_inputValue = int_inputValue + int_reverseValue;
        int_reverseValue = f_turn(int_inputValue);
    }

    printf("Palindrome: %d \n", int_inputValue);
    return 0;
}