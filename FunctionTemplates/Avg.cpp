#include"Avg.h"
template<typename T>double Avg(const T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T> double Avg(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}