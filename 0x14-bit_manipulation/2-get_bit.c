#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @index: the index, starting from 0 of the bit to be gotten
 * @n: number to search
 *
 * Returns: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;
	return (bit_value);
}
