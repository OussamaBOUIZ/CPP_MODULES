#ifndef __ITER_H__
# define __ITER_H__

template <typename T>

void iter (T *arr, int arraySize, void(*func)(T  &))
{
	for (int i = 0; i < arraySize; i++)
		func(arr[i]);
}
#endif
