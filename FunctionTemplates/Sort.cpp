#include"Sort.h"
template<typename T> void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//—четчик 'i' выбирает элемент, в который нужно поместить минимальное значение из перебираемых
		for (int j = i + 1; j < n; j++)
		{
			//—четчик 'j' перебирает элементы, в поисках минимального
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T> void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				for (int k = i; k < ROWS; k++)
				{
					for (int l = k == i ? j + 1 : 0; l < COLS; l++)
					{
						if (arr[i][j] > arr[k][l])
						{
							T tmp = arr[i][j];
							arr[i][j] = arr[k][l];
							arr[k][l] = tmp;
						}
					}
				}
			}
		}
	}
}