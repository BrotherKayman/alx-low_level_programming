/**
* get_bit - Gets value of a bit at given index.
* @n: Number to get the bit from.
* @index: The index of bit to
*
* Return: Value of index bit or -1 if an error occurs.
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask = 1UL << index;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
if ((n & mask) != 0)
{
return (1);
}
else
{
return (0);
}
}
