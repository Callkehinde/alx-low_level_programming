#include "function_pointers.h"

/**
 *int_index - searches for an interger
 @array: array of integers
 @size: number of elements in array
 @@cmp: pointer to funnction used to compare values

Return: index of first element.
-1 if no element is found or size <= 0.
/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array