#include <iostream>
using namespace std;
//#define SUMMA
//#define ARITHMETICAL_MEAN
//#define MAX_MIN

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = { 3,5,8 };
	int Summa = 0;
	int max = arr[0];
	int min = arr[0];
	//arr[2] = 123; //Обращение ко второму элементу массива на запись
	//cout << arr[2] << endl; //Обращение ко второму массива на чтение
	//SIZE-1;
	//   n-1;

	//Ввод массива с клавиатуры
	cout << "Введите элементы массива: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	
#ifdef SUMMA
	for (int i = 0; i < n; i++)
	{
		Summa += arr[i];
	}
	cout << "Сумма элементов массива равна: " << Summa << endl;
#endif // SUMMA

#ifdef ARITHMETICAL_MEAN
	for (int i = 0; i < n; i++)
	{
		Summa += arr[i];
	}
	cout << "Среднее арифметическое элементов массива равно: " << Summa / n << endl;
#endif // ARITHMETICAL_MEAN

#ifdef MAX_MIN
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	cout << "Максимальное значение элементов массива равно: " << max << endl;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	cout << "Минимальное значение элементов массива равно: " << min << endl;
#endif // MAX_MIN

}