/**
 * reverse_array - Function reverses the content of an array
 * @a: an array of integers
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
int i, x;
for (i = 0; i < n / 2; i++)
{
x = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = x;
}
}
