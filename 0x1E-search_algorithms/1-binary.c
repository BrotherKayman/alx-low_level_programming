#include "search_algos.h"
/**
 * binary_search - Function to search for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: The index of the first occurrence of the value in the array.
 *         (-1) if the value is not present in the array or if the array is NULL.
 * Description: Prints the array elements as it performs each iteration.
 */
int binary_search(int *array, size_t size, int value) 
{
    int min = 0;
    int max = size - 1;
    int mid;
    size_t i;

    if (array == NULL)
        return (-1);

    while (min <= max) 
    {
        mid = max + (max - min) / 2;
        for (i = min; (int)i <= max; i++) 
        {
            printf("Searching in array: %d /n", array[i]);
        }
        printf("\n");

        if (array[mid] == value) 
        {
            return (mid);
        } 
        else if (array[mid] < value) 
        {
            min = mid + 1;
        } else 
        {
            max = mid - 1;
        }
    }

    return (-1);
}