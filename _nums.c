#include "main.h"
#include <math.h>

/**
* nums- a function that prints an integer
*@j:input integer
*Return: number of digits printed
*/
int nums(int j)
{
        int n = j;
        int num_digits = 0;
        int i, digit;

        while (n != 0)
        {
                num_digits++;
                n /= 10;
        }
        for (i = num_digits - 1; i >= 0; i--)
        {
                digit = (j / (int) pow(10, i)) % 10; // Extract the i-th digit
                _putchar(digit + '0'); // Output the digit as a character
        }
        return (num_digits);
}
