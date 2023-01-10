template <typename T, typename F>

void iter (T arr, size_t arraySize, F func)
{
	for (size_t i = 0; i < arraySize; i++)
		func(arr[i]);
}