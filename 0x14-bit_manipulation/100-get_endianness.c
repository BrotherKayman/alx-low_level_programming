/**
* get_endianness - Checks the endianness
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
unsigned int x = 1;
char *byte = (char *)&x;
return ((int)(*byte));
}
