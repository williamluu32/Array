#include <stdio.h>
#include <limits.h>

int get_min(int* arr, int arr_size)
{
	if(arr_size == 0)
		return -1;

	int min = INT_MAX;
	
	for(int i = 0; i < arr_size; i++)
	{
		if(*(arr + i) < min)
			min = *(arr + i);
	}

	return min;
}

int get_max(int* arr, int arr_size)
{
	if(arr_size == 0)
		return -1;

	int max = INT_MIN;

	for(int i = 0; i < arr_size; i++)
	{
		if(*(arr + i) > max)
			max = *(arr + i);
	}

	return max;
}
int main()
{
	int arr[] = {22, 14, 8, 17, 35, 3};
	int size = sizeof(arr)/sizeof(*(arr + 0));

	printf("Minimum element is: %d", get_min(arr, size));
	printf("Maximum element is: %d", get_max(arr, size));
	return 0;
}




