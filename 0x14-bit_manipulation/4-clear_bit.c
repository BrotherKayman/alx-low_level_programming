/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to value of index
 * @index: The index of the bit to clear
 *
 * Return: 1 if it worked, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
  unsigned long int mask = 1UL << index;
  if (index >= sizeof(unsigned long int) * 8)
    {

      return (-1);
  }





  *n &= ~mask;

  return (1);
}
