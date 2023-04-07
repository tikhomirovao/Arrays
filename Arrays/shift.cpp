#include"shift.h"
void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
	}
}
void shiftLeft(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
	}
}
void shiftLeft(int arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	for (int i = 0; i < 1; i++)
	{
		{
			for (int j = 0; j < ROWS; j++)
			{
				int temp = arr[j][0];
				for (int k = 0; k < COLS - 1; k++)
				{
					arr[j][k] = arr[j][k + 1];
				}
				arr[j][COLS - 1] = temp;
			}
		}
	}
}
void shiftLeft(double arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	for (int i = 0; i < 1; i++)
	{
		{
			for (int j = 0; j < ROWS; j++)
			{
				int temp = arr[j][0];
				for (int k = 0; k < COLS - 1; k++)
				{
					arr[j][k] = arr[j][k + 1];
				}
				arr[j][COLS - 1] = temp;
			}
		}
	}
}
void shiftLeft(char arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	for (int i = 0; i < 1; i++)
	{
		{
			for (int j = 0; j < ROWS; j++)
			{
				int temp = arr[j][0];
				for (int k = 0; k < COLS - 1; k++)
				{
					arr[j][k] = arr[j][k + 1];
				}
				arr[j][COLS - 1] = temp;
			}
		}
	}
}
void shiftRight(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void shiftRight(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}
}
void shiftRight(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}
}
void shiftRight(int arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			int temp = arr[j][COLS - 1];
			for (int k = COLS - 1; k >= j - 1; k--)
			{
				arr[j][k] = arr[j][k - 1];
			}
			arr[j][0] = temp;
		}
	}
}
void shiftRight(double arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			int temp = arr[j][COLS - 1];
			for (int k = COLS - 1; k >= j - 1; k--)
			{
				arr[j][k] = arr[j][k - 1];
			}
			arr[j][0] = temp;
		}
	}
}
void shiftRight(char arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			int temp = arr[j][COLS - 1];
			for (int k = COLS - 1; k >= j - 1; k--)
			{
				arr[j][k] = arr[j][k - 1];
			}
			arr[j][0] = temp;
		}
	}
}