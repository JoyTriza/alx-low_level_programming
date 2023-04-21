#include "function_pointers.h"

/**
  * int_index - ...
  * @array: ...
  * @size: ...
  * @cmp: ...
  * Return: ...
  */

int int_index(int *array, int size, int (*cmp)(int))

{
	int z = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (z < size)
			{
				if (cmp(array[z]))
					return (z);

				z++;
			}
		}
	}

	return (-1);

}
